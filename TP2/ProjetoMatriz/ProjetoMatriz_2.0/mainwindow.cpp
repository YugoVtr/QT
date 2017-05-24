#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    matriz_1(0),
    matriz_2(0),
    //inicializar itens
    triangularSuperior_matriz_1(0),
    triangularSuperior_matriz_2(0),
    triangularInferior_matriz_1(0),
    triangularInferior_matriz_2(0),
    simetrica_matriz_1(0),
    simetrica_matriz_2(0),
    identidade_matriz_1(0),
    identidade_matriz_2(0),
    iguais_matriz_1(0),
    iguais_matriz_2(0),
    diferentes_matriz_1(0),
    diferentes_matriz_2(0),
    ortogonal_matriz_1(0),
    ortogonal_matriz_2(0),
    permutacao_matriz_1(0),
    permutacao_matriz_2(0)
{
    ui->setupUi(this);

    //Desabilitar bushButton's
    ui->pushButton_Limpar_Matriz_1->setEnabled(false);
    ui->pushButton_Limpar_Matriz_2->setEnabled(false);
    ui->tableWidget->setEnabled(false);

    //Desabilitar os bushButton's de operações
    ui->pushButton_Adicao->setEnabled(false);
    ui->pushButton_Subtracao->setEnabled(false);
    ui->pushButton_Multiplicacao->setEnabled(false);
    ui->pushButton_Transposta_Matriz_1->setEnabled(false);
    ui->pushButton_Transposta_Matriz_2->setEnabled(false);
    ui->pushButton_Potenciacao_Matriz_1->setEnabled(false);
    ui->pushButton_MultiplicarPorConstante_Matriz_1->setEnabled(false);
    ui->pushButton_Potenciacao_Matriz_2->setEnabled(false);
    ui->pushButton_MultiplicarPorConstante_Matriz_2->setEnabled(false);
    ui->lineEdit_Expoente_Matriz_1->setEnabled(false);
    ui->lineEdit_Constante_Matriz_1->setEnabled(false);
    ui->lineEdit_Expoente_Matriz_2->setEnabled(false);
    ui->lineEdit_Constante_Matriz_2->setEnabled(false);
    ui->tableWidget_Exibir_Matriz_1->setEnabled(false);
    ui->tableWidget_Exibir_Matriz_2->setEnabled(false);

    //Arruma o tamanho da tela
    this->setGeometry(417,40,this->width(),190);
    this->setFixedSize(this->width(),this->height());
}

MainWindow::~MainWindow()
{
    delete ui;
    if(matriz_1) delete matriz_1;
    if(matriz_2) delete matriz_2;

    //Destruir os itens
    if(triangularSuperior_matriz_1)delete triangularSuperior_matriz_1;
    if(triangularSuperior_matriz_2)delete triangularSuperior_matriz_2;
    if(triangularInferior_matriz_1)delete triangularInferior_matriz_1;
    if(triangularInferior_matriz_2)delete triangularInferior_matriz_2;
    if(simetrica_matriz_1)delete simetrica_matriz_1;
    if(simetrica_matriz_2)delete simetrica_matriz_2;
    if(identidade_matriz_1)delete identidade_matriz_1;
    if(identidade_matriz_2)delete identidade_matriz_2;
    if(iguais_matriz_1)delete iguais_matriz_1;
    if(iguais_matriz_2)delete iguais_matriz_2;
    if(diferentes_matriz_1)delete diferentes_matriz_1;
    if(diferentes_matriz_2)delete diferentes_matriz_2;
    if(ortogonal_matriz_1)delete ortogonal_matriz_1;
    if(ortogonal_matriz_2)delete ortogonal_matriz_2;
    if(permutacao_matriz_1)delete permutacao_matriz_1;
    if(permutacao_matriz_2)delete permutacao_matriz_2;

    this->destruirMatriz(ui->tableWidget_Exibir_Matriz_1);
    this->destruirMatriz(ui->tableWidget_Exibir_Matriz_2);
}

void MainWindow::on_pushButton_Criar_Matriz_1_clicked()
{
    try
    {
        int linha = ui->lineEdit_QuantLinhas_Matriz_1->text().toInt();
        int coluna = ui->lineEdit_QuantColunas_Matriz_1->text().toInt();
        matriz_1 = new Ferias::Matriz(linha,coluna);
        for(int contador_linha=0; contador_linha < linha ; contador_linha++)
        {
            for(int contador_coluna= 0; contador_coluna < coluna; contador_coluna++)
            {
                int elemento =  QInputDialog::getInt(this , "Leitura","Matriz 1 [ "+
                                                     QString::number(contador_linha) +
                                                     ", "+ QString::number(contador_coluna) + "] = ");

                matriz_1->setElemento(elemento,contador_linha,contador_coluna);
            }
        }
        this->imprimirMatriz(matriz_1,ui->tableWidget_Exibir_Matriz_1);
        this->ajustarTabela(ui->tableWidget_Exibir_Matriz_1);


        //Habilitar e desabilitar botoes
        ui->pushButton_Criar_Matriz_1->setEnabled(false);
        ui->pushButton_Limpar_Matriz_1->setEnabled(true);

        //Habilitar os botoes das operações
        if(matriz_1 && matriz_2)
        {
            //Habilitar os bushButton's de operações
            ui->pushButton_Adicao->setEnabled(true);
            ui->pushButton_Subtracao->setEnabled(true);
            ui->pushButton_Multiplicacao->setEnabled(true);
            ui->pushButton_Transposta_Matriz_1->setEnabled(true);
            ui->pushButton_Transposta_Matriz_2->setEnabled(true);
            ui->pushButton_Potenciacao_Matriz_2->setEnabled(true);
            ui->pushButton_MultiplicarPorConstante_Matriz_2->setEnabled(true);
            ui->lineEdit_Expoente_Matriz_2->setEnabled(true);
            ui->lineEdit_Constante_Matriz_2->setEnabled(true);
        }
        ui->pushButton_Potenciacao_Matriz_1->setEnabled(true);
        ui->pushButton_MultiplicarPorConstante_Matriz_1->setEnabled(true);
        ui->lineEdit_Expoente_Matriz_1->setEnabled(true);
        ui->lineEdit_Constante_Matriz_1->setEnabled(true);

        this->imprimir_Valores_Na_Gride();
        this->setFixedSize(440,679);
    }
    catch(std::bad_alloc&){QMessageBox::information(this,"ERRO NO SISTEMA","Matriz nao pode ser criada");}
    catch(QString &erro){QMessageBox::information(this,"ERRO NO SISTEMA",erro);}
}

void MainWindow::on_pushButton_Limpar_Matriz_1_clicked()
{
    delete matriz_1;
    matriz_1 = 0;
    ui->lineEdit_QuantLinhas_Matriz_1->clear();
    ui->lineEdit_QuantColunas_Matriz_1->clear();
    //Restaurar os pushbutton
    ui->pushButton_Criar_Matriz_1->setEnabled(true);
    ui->pushButton_Limpar_Matriz_1->setEnabled(false);

    //Desabilitar os bushButton's de operações
    ui->pushButton_Adicao->setEnabled(false);
    ui->pushButton_Subtracao->setEnabled(false);
    ui->pushButton_Multiplicacao->setEnabled(false);
    ui->pushButton_Transposta_Matriz_1->setEnabled(false);
    ui->pushButton_Transposta_Matriz_2->setEnabled(false);
    ui->pushButton_Potenciacao_Matriz_1->setEnabled(false);
    ui->pushButton_MultiplicarPorConstante_Matriz_1->setEnabled(false);
    ui->lineEdit_Expoente_Matriz_1->setEnabled(false);
    ui->lineEdit_Constante_Matriz_1->setEnabled(false);

    this->destruirMatriz(ui->tableWidget_Exibir_Matriz_1);

    this->limpar_Gride();
    if(!matriz_1 && !matriz_2) this->setFixedSize(440,193);
}

void MainWindow::on_pushButton_Criar_Matriz_2_clicked()
{
    try
    {
        int linha = ui->lineEdit_QuantLinhas_Matriz_2->text().toInt();
        int coluna = ui->lineEdit_QuantColunas_Matriz_2->text().toInt();
        matriz_2 = new Ferias::Matriz(linha,coluna);
        for(int contador_linha=0; contador_linha < linha ; contador_linha++)
        {
            for(int contador_coluna= 0; contador_coluna < coluna; contador_coluna++)
            {
                int elemento =  QInputDialog::getInt(this , "Leitura","Matriz 2 [ "+ QString::number(contador_linha) + ", "+ QString::number(contador_coluna) + "] = ");
                matriz_2->setElemento(elemento,contador_linha,contador_coluna);
            }
        }
        this->imprimirMatriz(matriz_2,ui->tableWidget_Exibir_Matriz_2);
        this->ajustarTabela(ui->tableWidget_Exibir_Matriz_2);

        //Habilitar e desabilitar botoes
        ui->pushButton_Criar_Matriz_2->setEnabled(false);
        ui->pushButton_Limpar_Matriz_2->setEnabled(true);

        //Habilitar os botoes das operações
        if(matriz_1 && matriz_2)
        {
            //Habilitar os bushButton's de operações
            ui->pushButton_Adicao->setEnabled(true);
            ui->pushButton_Subtracao->setEnabled(true);
            ui->pushButton_Multiplicacao->setEnabled(true);
            ui->pushButton_Transposta_Matriz_1->setEnabled(true);
            ui->pushButton_Transposta_Matriz_2->setEnabled(true);
            ui->pushButton_Potenciacao_Matriz_1->setEnabled(true);
            ui->pushButton_MultiplicarPorConstante_Matriz_1->setEnabled(true);
            ui->lineEdit_Expoente_Matriz_1->setEnabled(true);
            ui->lineEdit_Constante_Matriz_1->setEnabled(true);
        }
        ui->pushButton_Potenciacao_Matriz_2->setEnabled(true);
        ui->pushButton_MultiplicarPorConstante_Matriz_2->setEnabled(true);
        ui->lineEdit_Expoente_Matriz_2->setEnabled(true);
        ui->lineEdit_Constante_Matriz_2->setEnabled(true);

        this->imprimir_Valores_Na_Gride();
        this->setFixedSize(440,679);
    }
    catch(std::bad_alloc&){QMessageBox::information(this,"ERRO NO SISTEMA","Matriz nao pode ser criada");}
    catch(QString &erro){QMessageBox::information(this,"ERRO NO SISTEMA",erro);}
}

void MainWindow::on_pushButton_Limpar_Matriz_2_clicked()
{
    delete matriz_2;
    matriz_2 = 0;
    ui->lineEdit_QuantLinhas_Matriz_2->clear();
    ui->lineEdit_QuantColunas_Matriz_2->clear();
    //Restaurar os pushbutton
    ui->pushButton_Criar_Matriz_2->setEnabled(true);
    ui->pushButton_Limpar_Matriz_2->setEnabled(false);

    //Desabilitar os bushButton's de operações
    ui->pushButton_Adicao->setEnabled(false);
    ui->pushButton_Subtracao->setEnabled(false);
    ui->pushButton_Multiplicacao->setEnabled(false);
    ui->pushButton_Transposta_Matriz_1->setEnabled(false);
    ui->pushButton_Transposta_Matriz_2->setEnabled(false);
    ui->pushButton_Potenciacao_Matriz_2->setEnabled(false);
    ui->pushButton_MultiplicarPorConstante_Matriz_2->setEnabled(false);
    ui->lineEdit_Expoente_Matriz_2->setEnabled(false);
    ui->lineEdit_Constante_Matriz_2->setEnabled(false);

    this->destruirMatriz(ui->tableWidget_Exibir_Matriz_2);

    this->limpar_Gride();
    if(!matriz_1 && !matriz_2) this->setFixedSize(440,193);
}

void MainWindow::on_pushButton_Adicao_clicked()
{
    try
    {
        if(matriz_1==0) throw QString("Primeira Matriz não criada");
        if(matriz_2==0) throw QString("Segunda Matriz não criada");

        //Como a matriz_1 e um ponteiro e não estou usando -> preciso informar com *
        //que quero usar o valor apontado por matriz_1
        Ferias::Matriz *adicao = *(matriz_1) + matriz_2;

        QMessageBox::about(this,"Resultado",adicao->getMatriz());
        delete adicao;
    } catch (QString &erro){QMessageBox::information(this,"ERRO",erro);}
}


void MainWindow::on_pushButton_Subtracao_clicked()
{
    try
    {
        if(matriz_1==0) throw QString("Primeira Matriz não criada");
        if(matriz_2==0) throw QString("Segunda Matriz não criada");

        //Como a matriz_1 e um ponteiro e não estou usando -> preciso informar com *
        //que quero usar o valor apontado por matriz_1
        Ferias::Matriz *subtracao = *(matriz_1) - matriz_2;

        QMessageBox::about(this,"Resultado",subtracao->getMatriz());
        delete subtracao;
    } catch (QString &erro){QMessageBox::information(this,"ERRO",erro);}
}

void MainWindow::on_pushButton_Multiplicacao_clicked()
{
    try
    {
        if(matriz_1==0) throw QString("Primeira Matriz não criada");
        if(matriz_2==0) throw QString("Segunda Matriz não criada");

        //Como a matriz_1 e um ponteiro e não estou usando -> preciso informar com *
        //que quero usar o valor apontado por matriz_1
        Ferias::Matriz *multiplicacao = *(matriz_1) * matriz_2;

        QMessageBox::about(this,"Resultado",multiplicacao->getMatriz());
        delete multiplicacao;
    } catch (QString &erro){QMessageBox::information(this,"ERRO",erro);}
}
void MainWindow::on_pushButton_Transposta_Matriz_1_clicked()
{
    try
    {
        Ferias::Matriz *transposta = matriz_1->gerarTransposta();
        QMessageBox::about(this,"Resultado",transposta->getMatriz());
        delete transposta;
    } catch (QString &erro){QMessageBox::information(this,"ERRO",erro);}
}
void MainWindow::on_pushButton_Transposta_Matriz_2_clicked()
{
    try
    {
        Ferias::Matriz *transposta = matriz_2->gerarTransposta();
        QMessageBox::about(this,"Resultado",transposta->getMatriz());
        delete transposta;
    } catch (QString &erro){QMessageBox::information(this,"ERRO",erro);}
}
void MainWindow::on_pushButton_Potenciacao_Matriz_1_clicked()
{
    try
    {
        int valor = ui->lineEdit_Expoente_Matriz_1->text().toInt();
        Ferias::Matriz *potencia = matriz_1->calcularPotencia(valor);
        QMessageBox::about(this,"Resultado",potencia->getMatriz());
        delete potencia;
    } catch (QString &erro){QMessageBox::information(this,"ERRO",erro);}
}

void MainWindow::on_pushButton_MultiplicarPorConstante_Matriz_1_clicked()
{
    try
    {
        int valor = ui->lineEdit_Constante_Matriz_1->text().toInt();
        Ferias::Matriz *constante = matriz_1->multiplicarPorK(valor);
        QMessageBox::about(this,"Resultado",constante->getMatriz());
        delete constante;
    } catch (QString &erro){QMessageBox::information(this,"ERRO",erro);}
}

void MainWindow::on_pushButton_Potenciacao_Matriz_2_clicked()
{
    try
    {
        int valor = ui->lineEdit_Expoente_Matriz_2->text().toInt();
        Ferias::Matriz *potencia = matriz_2->calcularPotencia(valor);
        QMessageBox::about(this,"Resultado",potencia->getMatriz());
        delete potencia;
    } catch (QString &erro){QMessageBox::information(this,"ERRO",erro);}
}

void MainWindow::on_pushButton_MultiplicarPorConstante_Matriz_2_clicked()
{
    try
    {
        int valor = ui->lineEdit_Constante_Matriz_2->text().toInt();
        Ferias::Matriz *constante = matriz_2->multiplicarPorK(valor);
        QMessageBox::about(this,"Resultado",constante->getMatriz());
        delete constante;
    } catch (QString &erro){QMessageBox::information(this,"ERRO",erro);}
}
void MainWindow::imprimir_Valores_Na_Gride()
{
    try
    {
        if(matriz_1)
        {
            QString resultado_triangularSuperior_matriz_1 = "NAO";
            if(matriz_1->eTriangularSuperior()) resultado_triangularSuperior_matriz_1="SIM";
            triangularSuperior_matriz_1 = new QTableWidgetItem(resultado_triangularSuperior_matriz_1);
            ui->tableWidget->setItem(0,0,triangularSuperior_matriz_1);

            QString resultado_triangularInferior_matriz_1 = "NAO";
            if(matriz_1->eTriangularInferior()) resultado_triangularInferior_matriz_1="SIM";
            triangularInferior_matriz_1 = new QTableWidgetItem(resultado_triangularInferior_matriz_1);
            ui->tableWidget->setItem(1,0,triangularInferior_matriz_1);

            QString resultado_simetrica_matriz_1 = "NAO";
            if(matriz_1->eSimetrica()) resultado_simetrica_matriz_1 = "SIM";
            simetrica_matriz_1 = new QTableWidgetItem(resultado_simetrica_matriz_1);
            ui->tableWidget->setItem(2,0,simetrica_matriz_1);

            QString resultado_identidade_matriz_1 = "NAO";
            if(matriz_1->eIdentidade()) resultado_identidade_matriz_1 = "SIM";
            identidade_matriz_1 = new QTableWidgetItem(resultado_identidade_matriz_1);
            ui->tableWidget->setItem(3,0,identidade_matriz_1);

            QString resultado_ortogonal_matriz_1 = "NAO";
            if(matriz_1->eOrtogonal()) resultado_ortogonal_matriz_1 = "SIM";
            ortogonal_matriz_1 = new QTableWidgetItem(resultado_ortogonal_matriz_1);
            ui->tableWidget->setItem(6,0,ortogonal_matriz_1);

            QString resultado_permutacao_matriz_1 = "NAO";
            if(matriz_1->eDePermutacao()) resultado_permutacao_matriz_1 = "SIM";
            permutacao_matriz_1 = new QTableWidgetItem(resultado_permutacao_matriz_1);
            ui->tableWidget->setItem(7,0,permutacao_matriz_1);

            for(int linha=0;linha<8;linha++)//Centralizar
            {
                if(linha==4)linha+=2;
                ui->tableWidget->item(linha,0)->setTextAlignment(Qt::AlignCenter);
            }
        }

        if(matriz_1 && matriz_2)
        {
            QString resultado_iguais_matriz_1 = "NAO";
            if(*(matriz_1)==matriz_2) resultado_iguais_matriz_1 = "SIM";
            iguais_matriz_1 = new QTableWidgetItem(resultado_iguais_matriz_1);
            ui->tableWidget->setItem(4,0,iguais_matriz_1);

            QString resultado_diferentes_matriz_1 = "NAO";
            if(*(matriz_1)!=matriz_2) resultado_diferentes_matriz_1 = "SIM";
            diferentes_matriz_1 = new QTableWidgetItem(resultado_diferentes_matriz_1);
            ui->tableWidget->setItem(5,0,diferentes_matriz_1);

            QString resultado_iguais_matriz_2 = "NAO";
            if(*(matriz_2)==matriz_1) resultado_iguais_matriz_2 = "SIM";
            iguais_matriz_2 = new QTableWidgetItem(resultado_iguais_matriz_2);
            ui->tableWidget->setItem(4,1,iguais_matriz_2);

            QString resultado_diferentes_matriz_2 = "NAO";
            if(*(matriz_2)!=matriz_1) resultado_diferentes_matriz_2 = "SIM";
            diferentes_matriz_2 = new QTableWidgetItem(resultado_diferentes_matriz_2);
            ui->tableWidget->setItem(5,1,diferentes_matriz_2);
            //Centralizar

            for(int linha=4;linha<6;linha++)
                for(int coluna=0;coluna<2;coluna++)
                    ui->tableWidget->item(linha,coluna)->setTextAlignment(Qt::AlignCenter);

        }

        if(matriz_2)
        {
            QString resultado_triangularSuperior_matriz_2 = "NAO";
            if(matriz_2->eTriangularSuperior()) resultado_triangularSuperior_matriz_2="SIM";
            triangularSuperior_matriz_2 = new QTableWidgetItem(resultado_triangularSuperior_matriz_2);
            ui->tableWidget->setItem(0,1,triangularSuperior_matriz_2);

            QString resultado_triangularInferior_matriz_2 = "NAO";
            if(matriz_2->eTriangularInferior()) resultado_triangularInferior_matriz_2="SIM";
            triangularInferior_matriz_2 = new QTableWidgetItem(resultado_triangularInferior_matriz_2);
            ui->tableWidget->setItem(1,1,triangularInferior_matriz_2);

            QString resultado_simetrica_matriz_2 = "NAO";
            if(matriz_2->eSimetrica()) resultado_simetrica_matriz_2 = "SIM";
            simetrica_matriz_2 = new QTableWidgetItem(resultado_simetrica_matriz_2);
            ui->tableWidget->setItem(2,1,simetrica_matriz_2);

            QString resultado_identidade_matriz_2 = "NAO";
            if(matriz_2->eIdentidade()) resultado_identidade_matriz_2 = "SIM";
            identidade_matriz_2 = new QTableWidgetItem(resultado_identidade_matriz_2);
            ui->tableWidget->setItem(3,1,identidade_matriz_2);

            QString resultado_ortogonal_matriz_2 = "NAO";
            if(matriz_2->eOrtogonal()) resultado_ortogonal_matriz_2 = "SIM";
            ortogonal_matriz_2 = new QTableWidgetItem(resultado_ortogonal_matriz_2);
            ui->tableWidget->setItem(6,1,ortogonal_matriz_2);

            QString resultado_permutacao_matriz_2 = "NAO";
            if(matriz_2->eDePermutacao()) resultado_permutacao_matriz_2 = "SIM";
            permutacao_matriz_2 = new QTableWidgetItem(resultado_permutacao_matriz_2);
            ui->tableWidget->setItem(7,1,permutacao_matriz_2);

            for(int linha=0;linha<8;linha++)//Centralizar
            {
                if(linha==4)linha+=2;
                ui->tableWidget->item(linha,1)->setTextAlignment(Qt::AlignCenter);
            }
        }

        //Atribuir cor aos elementos
        for(int linha = 0 ; linha<9 ; linha++)
        {
            for(int coluna = 0 ; coluna<2 ; coluna++)
            {
                if(ui->tableWidget->item(linha,coluna))
                {
                    if(ui->tableWidget->item(linha,coluna)->text()=="NAO")ui->tableWidget->item(linha,coluna)->setTextColor(QColor("Red"));
                    else ui->tableWidget->item(linha,coluna)->setTextColor(QColor("Green"));
                }
            }
        }
    }catch (...) { QMessageBox::information(this,"ERRO","Não foi possivel imprimir na gripe");}
}
void MainWindow::limpar_Gride()
{
    try
    {
        if(!matriz_1)
        {
            delete triangularSuperior_matriz_1;
            triangularSuperior_matriz_1 = 0;
            ui->tableWidget->setItem(0,0,triangularSuperior_matriz_1);

            delete triangularInferior_matriz_1;
            triangularInferior_matriz_1 = 0;
            ui->tableWidget->setItem(1,0,triangularInferior_matriz_1);

            delete simetrica_matriz_1;
            simetrica_matriz_1 = 0;
            ui->tableWidget->setItem(2,0,simetrica_matriz_1);

            delete identidade_matriz_1;
            identidade_matriz_1 = 0;
            ui->tableWidget->setItem(3,0,identidade_matriz_1);

            delete ortogonal_matriz_1;
            ortogonal_matriz_1 = 0;
            ui->tableWidget->setItem(6,0,ortogonal_matriz_1);

            delete permutacao_matriz_1;
            permutacao_matriz_1 = 0;
            ui->tableWidget->setItem(7,0,permutacao_matriz_1);
        }

        if(!matriz_1 || !matriz_2)
        {
            delete iguais_matriz_1;
            iguais_matriz_1 = 0;
            ui->tableWidget->setItem(4,0,iguais_matriz_1);

            delete diferentes_matriz_1;
            diferentes_matriz_1 = 0;
            ui->tableWidget->setItem(5,0,diferentes_matriz_1);

            delete iguais_matriz_2;
            iguais_matriz_2 = 0;
            ui->tableWidget->setItem(4,1,iguais_matriz_2);

            delete diferentes_matriz_2;
            diferentes_matriz_2 = 0;
            ui->tableWidget->setItem(5,1,diferentes_matriz_2);
        }

        if(!matriz_2)
        {
            delete triangularSuperior_matriz_2;
            triangularSuperior_matriz_2 = 0;
            ui->tableWidget->setItem(0,1,triangularSuperior_matriz_2);

            delete triangularInferior_matriz_2;
            triangularInferior_matriz_2 = 0;
            ui->tableWidget->setItem(1,1,triangularInferior_matriz_2);

            delete simetrica_matriz_2;
            simetrica_matriz_2 = 0;
            ui->tableWidget->setItem(2,1,simetrica_matriz_2);

            delete identidade_matriz_2;
            identidade_matriz_2 = 0;
            ui->tableWidget->setItem(3,1,identidade_matriz_2);

            delete ortogonal_matriz_2;
            ortogonal_matriz_2 = 0;
            ui->tableWidget->setItem(6,1,ortogonal_matriz_2);

            delete permutacao_matriz_2;
            permutacao_matriz_2 = 0;
            ui->tableWidget->setItem(7,1,permutacao_matriz_2);
        }
    }catch (...) { QMessageBox::information(this,"ERRO","Não deu pra limpar a gride");}
}
void MainWindow::imprimirMatriz(Ferias::Matriz *matriz,QTableWidget *tabela)const
{
    int colunas = matriz->getQuantidadeDeColunas();
    int linhas = matriz->getQuantidadeDeLinhas();
    int tamanho = colunas*linhas;
    QTableWidgetItem *item[tamanho];
    int k = 0;
    for(int i = 0;i<linhas;i++)
    {
        for(int j=0;j<colunas;j++)
        {
            QString aux = QString::number(matriz->getElemento(i,j));
            item[k] = new QTableWidgetItem(aux);
            item[k]->setTextAlignment(Qt::AlignCenter);
            k++;
        }
    }
    tabela->setColumnCount(colunas);
    tabela->setRowCount(linhas);
    k = 0;
    for(int i = 0;i<linhas;i++)
    {
        for(int j=0;j<colunas;j++)
        {
           tabela->setItem(i,j,item[k]);
           k++;
           tabela->resizeColumnsToContents();
           tabela->resizeRowsToContents();
        }
    }
}

void MainWindow::ajustarTabela(QTableWidget *tabela)const
{
    //Em primeiro lugar, temos conteúdos margens de QTableWidget .
    int w =  0 , h =  0 ;

    //Em seguida, acrescentar largura de cada coluna para w e altura de cada linha para h .
    for  ( int i = 0 ; i < tabela -> columnCount ();  ++ i )
        w += tabela -> columnWidth ( i );
    for  ( int i = 0 ; i < tabela -> rowCount ();  ++ i )
        h += tabela -> rowHeight ( i );
    tabela->resize(w,h);

    //Se você quiser apenas para ajustar sua largura, você só precisa desativar barra de rolagem horizontal .:
    tabela->setHorizontalScrollBarPolicy ( Qt :: ScrollBarAlwaysOff );
    tabela-> setVerticalScrollBarPolicy ( Qt :: ScrollBarAlwaysOff );
}

void MainWindow::destruirMatriz(QTableWidget *tabela)
{
    int quantidadeDeLinhas = tabela->rowCount();
    int quantidadeDeColunas = tabela->columnCount();
    for(int linha = 0 ; linha < quantidadeDeLinhas ; linha++)
    {
        for(int coluna = 0 ; coluna < quantidadeDeColunas ; coluna++)
        {
            QTableWidgetItem *auxiliar = tabela->item(linha,coluna);
            if(auxiliar) delete auxiliar;
            auxiliar = 0;
        }
    }
    tabela->setColumnCount(0);
    tabela->setRowCount(0);
    tabela->resize(201,101);
}



