#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    graph(new Grafo()),
    flagUrlAresta(true)
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

    QRegExp peso("[0-9]*");
    QRegExpValidator *Peso = new QRegExpValidator(peso,ui->lineEdit_ArestaPeso);
    ui->lineEdit_ArestaPeso->setValidator(Peso);
    ui->pushButton_PrintMatriz->setEnabled(false);
    ui->pushButton_SeeAresta->setEnabled(false);
    this->exibirMenuAresta(false);
}

MainWindow::~MainWindow()
{
    delete graph;
    delete ui->lineEdit_ArestaPeso->validator();
    delete ui;
}

void MainWindow::exibirMenuAresta(bool flag) const
{
    if(flag){
        ui->label_ArestaOrigem->show();
        ui->comboBox_VerticeOrigem->show();
        ui->label_ArestaDestino->show();
        ui->comboBox_VerticeDestino->show();
        ui->label_ArestaPeso->show();
        ui->lineEdit_ArestaPeso->show();
        ui->checkBox_isDirected->show();
        ui->pushButton_IncluirAresta->show();
    }
    else{
        ui->label_ArestaOrigem->hide();
        ui->comboBox_VerticeOrigem->hide();
        ui->label_ArestaDestino->hide();
        ui->comboBox_VerticeDestino->hide();
        ui->label_ArestaPeso->hide();
        ui->lineEdit_ArestaPeso->hide();
        ui->checkBox_isDirected->hide();
        ui->pushButton_IncluirAresta->hide();
    }
}

QString MainWindow::print(){
    int size = graph->verticeCount();
    QString saida = "GRAFO - LISTA DE ADJACENCIA\n\n";
    for(int i=0;i < size;i++){
        QString vertice = ui->comboBox_VerticeOrigem->itemText(i);
        saida += vertice+":   ";

        std::queue<std::string>* adjacentes = graph->aresta(vertice.toStdString());
        while(!adjacentes->empty()){
            saida += QString::fromStdString(adjacentes->front());
            adjacentes->pop();
            saida += "   ";
        }
        delete adjacentes;
        saida +="\n";
    }
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
        ui->textEdit_Saida->setText(print());

        ui->pushButton_PrintMatriz->setEnabled(true);
        ui->pushButton_SeeAresta->setEnabled(true);
    } catch(std::string &erro) { QMessageBox::information(this,"ERRO",QString::fromStdString(erro)); }
}

void MainWindow::on_pushButton_LimparVertices_clicked()
{
    delete graph;
    graph = new Grafo();

    ui->textEdit_Saida->setText(print());
    ui->comboBox_VerticeOrigem->clear();
    ui->comboBox_VerticeDestino->clear();
    ui->pushButton_PrintMatriz->setEnabled(false);
    ui->pushButton_SeeAresta->setEnabled(false);
    if(!this->flagUrlAresta) this->on_pushButton_SeeAresta_clicked();
}

void MainWindow::on_pushButton_IncluirAresta_clicked()
{
    try
    {
        graph->createAresta(ui->comboBox_VerticeOrigem->currentText().toStdString(),
                           ui->comboBox_VerticeDestino->currentText().toStdString(),
                           ui->lineEdit_ArestaPeso->text().toInt(),
                           ui->checkBox_isDirected->isChecked());
        ui->textEdit_Saida->setText(print());
    }catch(std::string &erro) { QMessageBox::information(this,"ERRO",QString::fromStdString(erro)); }
}

void MainWindow::on_pushButton_PrintMatriz_clicked()
{
    try
    {
        Matriz* grafo = graph->toMatrix();
        QString saida(" \t");
        std::queue<std::string>* values = graph->vertice();
        for(int i=0;i<(int)values->size();i++){
            saida += QString::fromStdString(values->front()) + "\t";
            values->push(values->front());
            values->pop();
        }
        saida+= "\n";

        for(int i=0;i<grafo->getQuantidadeDeLinhas();i++){
            saida += QString::fromStdString(values->front()) + "\t";
            for(int j=0;j<grafo->getQuantidadeDeColunas();j++)
                saida += QString::number(grafo->getElemento(i,j)) + "\t";
            saida+= "\n";
            values->pop();
        }
        QMessageBox::about(this,"GRAFO",saida);
        delete grafo;
        delete values;
    }catch(std::string &erro) { QMessageBox::information(this,"ERRO",QString::fromStdString(erro)); }
}

void MainWindow::on_pushButton_SeeAresta_clicked()
{
    QString newUrl("../ProjetoGrafo/Arquivos/chevron_down.png");
    if(flagUrlAresta) {
        newUrl = "../ProjetoGrafo/Arquivos/chevron_up.png";
    }
    this->exibirMenuAresta(flagUrlAresta);
    QIcon chevron(newUrl);
    ui->pushButton_SeeAresta->setIcon(chevron);
    flagUrlAresta = !flagUrlAresta;
}


void MainWindow::on_actionOpen_triggered()
{
    try
    {
        QString nome_Do_Arquivo_No_Disco = QFileDialog::getOpenFileName(this,"Abrir Arquivo","../ProjetoGrafo/Arquivos","Arquivos Textos (*.csv *.txt)");
        PersistenciaGrafo open(nome_Do_Arquivo_No_Disco);
        delete graph;
        this->graph = open.carregar();
        std::queue<std::string>* all_Vertices =  graph->vertice();
        while(!all_Vertices->empty())
        {
            ui->comboBox_VerticeOrigem->addItem(QString::fromStdString(all_Vertices->front()));
            ui->comboBox_VerticeDestino->addItem(QString::fromStdString(all_Vertices->front()));
            all_Vertices->pop();
        }
        ui->textEdit_Saida->setText(print());
        if(this->flagUrlAresta) this->on_pushButton_SeeAresta_clicked();
        ui->comboBox_VerticeOrigem->clear();
        ui->comboBox_VerticeDestino->clear();
        if(all_Vertices) delete all_Vertices;
        ui->pushButton_PrintMatriz->setEnabled(true);
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

void MainWindow::on_actionCadastrar_Matriz_triggered()
{
    try
    {
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
            ui->textEdit_Saida->setText(print());
            if(this->flagUrlAresta) this->on_pushButton_SeeAresta_clicked();
            std::queue<std::string>* all_Vertices =  graph->vertice();
            while(!all_Vertices->empty())
            {
                ui->comboBox_VerticeOrigem->addItem(QString::fromStdString(all_Vertices->front()));
                ui->comboBox_VerticeDestino->addItem(QString::fromStdString(all_Vertices->front()));
                all_Vertices->pop();
            }
            if(all_Vertices) delete all_Vertices;
            ui->pushButton_PrintMatriz->setEnabled(true);
        }
    }catch(std::string &erro){QMessageBox::information(this,"ERRO",QString::fromStdString(erro));}
}

void MainWindow::on_pushButton_Print_Path_clicked()
{
    try{
        graph->bfs(ui->comboBox_VerticeOrigem->currentText().toStdString());
        QString print = QString::fromStdString(graph->print_path(ui->comboBox_VerticeOrigem->currentText().toStdString()
                                                                 ,ui->comboBox_VerticeDestino->currentText().toStdString()));
        ui->textEdit_Print_Path->setText(print);
    }catch(std::string &erro){QMessageBox::information(this,"ERRO",QString::fromStdString(erro));}
}
