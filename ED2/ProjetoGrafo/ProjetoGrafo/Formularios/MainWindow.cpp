#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    graph(new Grafo())
{
    ui->setupUi(this);

    this->setGeometry(
        QStyle::alignedRect(
            Qt::LeftToRight,
            Qt::AlignCenter,
            this->size(),
            qApp->desktop()->availableGeometry()
        )
    );
    this->setFixedSize(this->width(),this->height());
    ui->stackedWidget_Saida->setCurrentIndex(0);
    ui->stackedWidget_Opcoes->setCurrentIndex(0);
    ui->stackedWidget_Opcoes->setEnabled(false);
    ui->groupBox_Aresta->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete graph;
    delete ui;
}

QString MainWindow::print_Lista(){
    QString saida("");
    int size = graph->verticeCount();
    for(int i=0;i < size;i++){
        QString vertice = ui->comboBox_VerticeOrigem->itemText(i);
        saida += vertice+":   ";

        std::stack<std::string>* adjacentes = graph->aresta(vertice.toStdString());
        while(!adjacentes->empty()){
            saida += QString::fromStdString(adjacentes->top());
            adjacentes->pop();
            saida += "   ";
        }
        delete adjacentes;
        saida +="\n";
    }
    return saida;
}

QString MainWindow::print_Matriz(){
    Matriz* grafo = graph->toMatrix();
    QString saida("     ");
    std::stack<std::string>* values = graph->vertice();
    std::queue<std::string> values_Cell;

    while(!values->empty()){
        saida += QString::fromStdString(values->top()) + "   ";
        values_Cell.push(values->top());
        values->pop();
    }
    saida+= "\n";
    delete values;

    for(int i=0;i<grafo->getQuantidadeDeLinhas();i++){
        saida += QString::fromStdString(values_Cell.front()) + "   ";
        for(int j=0;j<grafo->getQuantidadeDeColunas();j++)
            saida += QString::number(grafo->getElemento(i,j)) + "   ";
        saida+= "\n";
        values_Cell.pop();
    }
    delete grafo;
    return saida;
}

void MainWindow::on_pushButton_IncluirVertice_clicked()
{
    try {
        if(ui->lineEdit_IncluirVertice->text().isEmpty()) throw std::string("Descrição invalida");
        graph->createVertice(ui->lineEdit_IncluirVertice->text().toStdString());
        ui->comboBox_VerticeOrigem->addItem(ui->lineEdit_IncluirVertice->text());
        ui->comboBox_VerticeDestino->addItem(ui->lineEdit_IncluirVertice->text());
        ui->lineEdit_IncluirVertice->clear();
        ui->textEdit_Saida->setText(print_Lista());

        ui->stackedWidget_Opcoes->setEnabled(true);
        ui->groupBox_Aresta->setEnabled(true);
    } catch(std::string &erro) { QMessageBox::information(this,"ERRO",QString::fromStdString(erro)); }
}

void MainWindow::on_pushButton_LimparVertices_clicked()
{
    delete graph;
    graph = new Grafo();

    ui->textEdit_Saida->clear();
    ui->textEdit_Saida_Matriz->clear();
    ui->textEdit_Print_Path->clear();
    ui->comboBox_VerticeOrigem->clear();
    ui->comboBox_VerticeDestino->clear();

    ui->stackedWidget_Opcoes->setEnabled(false);
    ui->groupBox_Aresta->setEnabled(false);
    ui->stackedWidget_Saida->setCurrentIndex(0);
    ui->stackedWidget_Opcoes->setCurrentIndex(0);
}

void MainWindow::on_pushButton_IncluirAresta_clicked()
{
    try
    {
        graph->createAresta(ui->comboBox_VerticeOrigem->currentText().toStdString(),
                           ui->comboBox_VerticeDestino->currentText().toStdString(),
                           ui->spinBox_ArestaPeso->text().toInt(),
                           ui->checkBox_isDirected->isChecked());
        ui->textEdit_Saida->setText(print_Lista());
    }catch(std::string &erro) { QMessageBox::information(this,"ERRO",QString::fromStdString(erro)); }
}

void MainWindow::on_pushButton_PrintMatriz_clicked()
{
    try
    {
        if(ui->stackedWidget_Saida->currentIndex()==0)
        {
            ui->textEdit_Saida_Matriz->setText(print_Matriz());
            ui->pushButton_PrintMatriz->setText("ver Lista");
            ui->stackedWidget_Saida->setCurrentIndex(1);
        }
        else
        {
            ui->stackedWidget_Saida->setCurrentIndex(0);
            ui->pushButton_PrintMatriz->setText("ver Matriz");
        }
    }catch(std::string &erro) { QMessageBox::information(this,"ERRO",QString::fromStdString(erro)); }
}

void MainWindow::on_actionOpen_triggered()
{
    try
    {
        this->on_pushButton_LimparVertices_clicked();
        QString nome_Do_Arquivo_No_Disco = QFileDialog::getOpenFileName(this,"Abrir Arquivo","../ProjetoGrafo/Arquivos","Arquivos Textos (*.csv *.txt)");
        PersistenciaGrafo open(nome_Do_Arquivo_No_Disco);
        if(graph) delete graph;
        this->graph = open.carregar();
        std::stack<std::string>* all_Vertices =  graph->vertice();
        while(!all_Vertices->empty())
        {
            ui->comboBox_VerticeOrigem->addItem(QString::fromStdString(all_Vertices->top()));
            ui->comboBox_VerticeDestino->addItem(QString::fromStdString(all_Vertices->top()));
            all_Vertices->pop();
        }
        ui->textEdit_Saida->setText(print_Lista());
        if(all_Vertices) delete all_Vertices;

        ui->stackedWidget_Opcoes->setEnabled(true);
        ui->groupBox_Aresta->setEnabled(true);
    }catch(QString &erro){QMessageBox::information(this,"ERRO",erro);}
    catch(std::string &erro){QMessageBox::information(this,"ERRO",QString::fromStdString(erro));}
}

void MainWindow::on_actionSave_triggered()
{
    try
    {
        if(graph->isEmpty()) throw QString("Grafo vazio");
        QString nome_Do_Arquivo_No_Disco = QFileDialog::getSaveFileName(this,"Salvar Arquivo","../ProjetoGrafo/Arquivos","Arquivos Textos (*.csv *.txt)");
        PersistenciaGrafo salvar(nome_Do_Arquivo_No_Disco);
        salvar.salvar(graph);
        QMessageBox::information(this,"Sucesso","Salvo com sucesso");
    }catch(QString &erro){QMessageBox::information(this,"ERRO",erro);}
    catch(std::string &erro){QMessageBox::information(this,"ERRO",QString::fromStdString(erro));}
}

void MainWindow::on_pushButton_Print_Path_clicked()
{
    try{
        std::stack<std::string> *vertices = graph->vertice();
        while(!vertices->empty())
        {
            ui->comboBox_PrintPath_Origem->addItem(QString::fromStdString(vertices->top()));
            ui->comboBox_PrintPath_Destino->addItem(QString::fromStdString(vertices->top()));
            vertices->pop();
        }
        delete vertices;
        ui->stackedWidget_Opcoes->setCurrentIndex(1);
    }catch(std::string &erro){QMessageBox::information(this,"ERRO",QString::fromStdString(erro));}
}

void MainWindow::on_pushButton_PrintPath_Realizar_clicked()
{
    try{
        graph->bfs(ui->comboBox_PrintPath_Origem->currentText().toStdString());
        QString print = QString::fromStdString(graph->print_path(ui->comboBox_PrintPath_Origem->currentText().toStdString()
                                                                 ,ui->comboBox_PrintPath_Destino->currentText().toStdString()));
        ui->textEdit_Print_Path->setText(print);
        ui->comboBox_PrintPath_Origem->clear();
        ui->comboBox_PrintPath_Destino->clear();
        ui->stackedWidget_Opcoes->setCurrentIndex(0);
    }catch(std::string &erro){QMessageBox::information(this,"ERRO",QString::fromStdString(erro));}
}

void MainWindow::on_pushButton_CadastraMatriz_clicked()
{
    try
    {
        this->on_pushButton_LimparVertices_clicked();
        int linha = QInputDialog::getInt(this , "Quantidade de Vetices","Informe a quantidade de vertices: ",0,1);
        if(linha){
            int coluna = linha;
            Matriz matriz(linha,coluna);
            for(int contador_linha=0; contador_linha < linha ; contador_linha++)
            {
                for(int contador_coluna= 0; contador_coluna < coluna; contador_coluna++)
                {
                    if(contador_linha!=contador_coluna)
                    {
                        int elemento =  QInputDialog::getInt(this , "Leitura","Matriz Adjacencia [ "+
                                                             QString::number(contador_linha) +
                                                             ", "+ QString::number(contador_coluna) + "] = ",0,0,1);
                        matriz.setElemento(elemento,contador_linha,contador_coluna);
                    }
                }
            }
            if(graph) delete graph;
            this->graph = new Grafo(&matriz);
            std::stack<std::string>* all_Vertices =  graph->vertice();
            while(!all_Vertices->empty())
            {
                ui->comboBox_VerticeOrigem->addItem(QString::fromStdString(all_Vertices->top()));
                ui->comboBox_VerticeDestino->addItem(QString::fromStdString(all_Vertices->top()));
                all_Vertices->pop();
            }
            ui->textEdit_Saida->setText(print_Lista());
            if(all_Vertices) delete all_Vertices;
        }
    }catch(std::string &erro){QMessageBox::information(this,"ERRO",QString::fromStdString(erro));}
}
