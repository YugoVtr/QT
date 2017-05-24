#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    conjuntoA(0),
    conjuntoB(0),
    tratamentoTamanho_A(0),
    tratamentoInserir_A(0),
    tratamentoTamanho_B(0),
    tratamentoInserir_B(0),
    eVazio_ConjuntoA(0),
    eVazio_ConjuntoB(0),
    eSub_ConjuntoA(0),
    eSub_ConjuntoB(0),
    eIdentico_ConjuntoA(0),
    eIdentico_ConjuntoB(0),
    eDisjunto_ConjuntoA(0),
    eDisjunto_ConjuntoB(0),
    amplitude_ConjuntoA(0),
    amplitude_ConjuntoB(0),
    produtoEscalarConjuntoA(0),
    produtoEscalarConjuntoB(0),
    media_Aritmetica_A(0),
    media_Aritmetica_B(0)
{
    try
    {
        ui->setupUi(this);
        this->setGeometry(450,100,514,375);     //Define a geometria inicia da mainWindow
        ui->pushButton_Menos->hide();           //Esconde o botão de diminuir a tela
        ui->pushButton_Menos->setEnabled(false);//Desativa o botão de diminuir a tela
        ui->pushButton_Mais->setEnabled(false); //Desativa o botão de almentar a tela
        ui->tableWidget_Mais->setEnabled(false);//So pra evitar de alguem mecher na gride
        ui->tableWidget_Mais->hide();           //Esconde a tabela

        //Desativa os botoes e espaços inserir valores antes que o conjunto seja criado
        ui->lineEdit_InserirElementoConjuntoA->setEnabled(false);
        ui->pushButton_InserirElementoConjuntoA->setEnabled(false);
        ui->lineEdit_InserirElementoConjuntoB->setEnabled(false);
        ui->pushButton_InserirElementoConjuntoB->setEnabled(false);
        ui->pushButton_Uniao->setEnabled(false);
        ui->pushButton_Intersecao->setEnabled(false);
        ui->pushButton_Diferenca_AB->setEnabled(false);
        ui->pushButton_Diferenca_BA->setEnabled(false);
        ui->pushButton_MaiorSubCadeia_Crescente->setEnabled(false);
        ui->pushButton_MaiorSubCadeia_Decrescente->setEnabled(false);
        ui->pushButton_UniaoOrdenada->setEnabled(false);

        //Permite a colocação apenas de numerais
        QRegExp tratamentoTamanhoA("[0-9]*");
        tratamentoTamanho_A = new QRegExpValidator(tratamentoTamanhoA,ui->lineEdit_TamanhoConjuntoA);
        ui->lineEdit_TamanhoConjuntoA->setValidator(tratamentoTamanho_A);

        QRegExp tratamentoTamanhoB("[0-9]*");
        tratamentoTamanho_B = new QRegExpValidator(tratamentoTamanhoB,ui->lineEdit_TamanhoConjuntoB);
        ui->lineEdit_TamanhoConjuntoB->setValidator(tratamentoTamanho_B);

        //Permite a colocação apenas de numerais e o sinal de menos
        QRegExp tratamentoInserirA("[0-9,-]*");
        tratamentoInserir_A = new QRegExpValidator(tratamentoInserirA,ui->lineEdit_InserirElementoConjuntoA);
        ui->lineEdit_InserirElementoConjuntoA->setValidator(tratamentoInserir_A);

        QRegExp tratamentoInserirB("[0-9,-]*");
        tratamentoInserir_B = new QRegExpValidator(tratamentoInserirB,ui->lineEdit_InserirElementoConjuntoB);
        ui->lineEdit_InserirElementoConjuntoB->setValidator(tratamentoInserir_B);
    } catch(std::bad_alloc&)
    {
         QMessageBox::information(this,"ERRO","Conjuto nao foi criado");
    }

}

MainWindow::~MainWindow()
{
    //Destruir tudo quanto e NEW que foi criado.
    if(conjuntoA) delete conjuntoA;
    if(conjuntoB) delete conjuntoB;
    delete tratamentoTamanho_A;
    delete tratamentoInserir_A;
    delete tratamentoTamanho_B;
    delete tratamentoInserir_B;
    if(eVazio_ConjuntoA)delete eVazio_ConjuntoA;
    if(eVazio_ConjuntoB)delete eVazio_ConjuntoB;
    if(eSub_ConjuntoA)delete eSub_ConjuntoA;
    if(eSub_ConjuntoB)delete eSub_ConjuntoB;
    if(eIdentico_ConjuntoA)delete eIdentico_ConjuntoA;
    if(eIdentico_ConjuntoB)delete eIdentico_ConjuntoB;
    if(eDisjunto_ConjuntoA)delete eDisjunto_ConjuntoA;
    if(eDisjunto_ConjuntoB)delete eDisjunto_ConjuntoB;
    if(amplitude_ConjuntoA)delete amplitude_ConjuntoA;
    if(amplitude_ConjuntoB)delete amplitude_ConjuntoB;
    if(produtoEscalarConjuntoA)delete produtoEscalarConjuntoA;
    if(produtoEscalarConjuntoB)delete produtoEscalarConjuntoB;
    if(media_Aritmetica_A)delete media_Aritmetica_A;
    if(media_Aritmetica_B)delete media_Aritmetica_B;
    delete ui;
}

void MainWindow::on_pushButton_TamanhoConjuntoA_clicked()
{
    try
    {
        int tamanho = ui->lineEdit_TamanhoConjuntoA->text().toInt();
        conjuntoA = new QuartaLista::Conjunto(tamanho);

        //habilita os espações e botoes do conjunto A
        ui->lineEdit_InserirElementoConjuntoA->setEnabled(true);
        ui->pushButton_InserirElementoConjuntoA->setEnabled(true);
        ui->lineEdit_TamanhoConjuntoA->setEnabled(false);
        ui->pushButton_TamanhoConjuntoA->setEnabled(false);

        if(conjuntoA!=0 && conjuntoB!=0) //verifica se os dois conjuntos ja foram criados e habilita os botoes
        {
            ui->pushButton_Uniao->setEnabled(true);
            ui->pushButton_Intersecao->setEnabled(true);
            ui->pushButton_Diferenca_AB->setEnabled(true);
            ui->pushButton_Diferenca_BA->setEnabled(true);
            ui->pushButton_MaiorSubCadeia_Crescente->setEnabled(true);
            ui->pushButton_MaiorSubCadeia_Decrescente->setEnabled(true);
            ui->pushButton_UniaoOrdenada->setEnabled(true);
            ui->pushButton_Mais->setEnabled(true);            
        }

    } catch (QString &erro)
    {
        QMessageBox::information(this,"ERRO",erro);
    } catch(std::bad_alloc&)
    {
         QMessageBox::information(this,"ERRO","Conjuto nao foi criado");
    }
}

void MainWindow::on_pushButton_InserirElementoConjuntoA_clicked()
{
    try
    {
        int elemento = ui->lineEdit_InserirElementoConjuntoA->text().toInt();
        conjuntoA->setElemento(elemento); // (*conjuntoA).setElemento(elemento); // tambem posso fazer assim
        QString saidaConjuntoA = "CONJUNTO A = " + conjuntoA->getConjunto();
        ui->label_ConjuntoA->setText(saidaConjuntoA);
        ui->label_ConjuntoA->adjustSize();              //ajusta a saida ao tamanho do conjunto
        ui->lineEdit_InserirElementoConjuntoA->clear(); // limpa a lineEdit quando um numero e inserido

    } catch (QString &erro)
    {
        QMessageBox::information(this,"ERRO",erro);
    }
}

void MainWindow::on_pushButton_TamanhoConjuntoB_clicked()
{
    try
    {
        int tamanho = ui->lineEdit_TamanhoConjuntoB->text().toInt();
        conjuntoB = new QuartaLista::Conjunto(tamanho);

        //habilita os espações e botoes do conjunto A
        ui->lineEdit_InserirElementoConjuntoB->setEnabled(true);
        ui->pushButton_InserirElementoConjuntoB->setEnabled(true);
        ui->lineEdit_TamanhoConjuntoB->setEnabled(false);
        ui->pushButton_TamanhoConjuntoB->setEnabled(false);

        if(conjuntoA!=0 && conjuntoB!=0)    //verifica se os dois conjuntos ja foram criados e habilita os botoes
        {
            ui->pushButton_Uniao->setEnabled(true);
            ui->pushButton_Intersecao->setEnabled(true);
            ui->pushButton_Diferenca_AB->setEnabled(true);
            ui->pushButton_Diferenca_BA->setEnabled(true);
            ui->pushButton_MaiorSubCadeia_Crescente->setEnabled(true);
            ui->pushButton_MaiorSubCadeia_Decrescente->setEnabled(true);
            ui->pushButton_UniaoOrdenada->setEnabled(true);
            ui->pushButton_Mais->setEnabled(true);
        }

    } catch (QString &erro)
    {
        QMessageBox::information(this,"ERRO",erro);
    } catch(std::bad_alloc&)
    {
         QMessageBox::information(this,"ERRO","Conjuto nao foi criado");
    }
}

void MainWindow::on_pushButton_InserirElementoConjuntoB_clicked()
{
    try
    {
        int elemento = ui->lineEdit_InserirElementoConjuntoB->text().toInt();
        conjuntoB->setElemento(elemento); // (*conjuntoB).setElemento(elemento); // tambem posso fazer assim
        QString saidaConjuntoB = "CONJUNTO B = " + conjuntoB->getConjunto();
        ui->label_ConjuntoB->setText(saidaConjuntoB);
        ui->label_ConjuntoB->adjustSize();              //ajusta a saida ao tamanho do conjunto
        ui->lineEdit_InserirElementoConjuntoB->clear(); // limpa a lineEdit quando um numero e inserido

    } catch (QString &erro)
    {
        QMessageBox::information(this,"ERRO",erro);
    }
}

void MainWindow::on_pushButton_Uniao_clicked()
{
    try
    {
        QuartaLista::Conjunto *uniao=0;
        uniao = conjuntoA->uniao(conjuntoB);
        QString saidaUniao = " União : " + uniao->getConjunto();
        ui->label_SaidaResultado->setText(saidaUniao);
        ui->label_SaidaResultado->adjustSize();
        delete uniao;
    } catch (QString &erro)
    {
        QMessageBox::information(this,"ERRO",erro);
    }
}

void MainWindow::on_pushButton_Intersecao_clicked()
{
    try
    {
        QuartaLista::Conjunto *intersecao=0;
        intersecao = conjuntoA->intersecao(conjuntoB);
        QString saidaIntersecao = " Intersecao : " + intersecao->getConjunto();
        ui->label_SaidaResultado->setText(saidaIntersecao);
        ui->label_SaidaResultado->adjustSize();
        delete intersecao;
    } catch (QString &erro)
    {
        QMessageBox::information(this,"ERRO",erro);
    }

}

void MainWindow::on_pushButton_Diferenca_AB_clicked()
{
    try
    {
        QuartaLista::Conjunto *diferenca_AB=0;
        diferenca_AB = conjuntoA->diferenca(conjuntoB);
        QString saidaDiferenca_AB = " Diferença A-B : " + diferenca_AB->getConjunto();
        ui->label_SaidaResultado->setText(saidaDiferenca_AB);
        ui->label_SaidaResultado->adjustSize();
        delete diferenca_AB;
    } catch (QString &erro)
    {
        QMessageBox::information(this,"ERRO",erro);
    }

}

void MainWindow::on_pushButton_Diferenca_BA_clicked()
{
    try
    {
        QuartaLista::Conjunto *diferenca_BA=0;
        diferenca_BA = conjuntoB->diferenca(conjuntoA);
        QString saidaDiferenca_BA = " Diferença A-B : " + diferenca_BA->getConjunto();
        ui->label_SaidaResultado->setText(saidaDiferenca_BA);
        ui->label_SaidaResultado->adjustSize();
        delete diferenca_BA;
    } catch (QString &erro)
    {
        QMessageBox::information(this,"ERRO",erro);
    }
}

void MainWindow::on_pushButton_MaiorSubCadeia_Crescente_clicked()
{
    try
    {
        //usei a mesma variavel subCadeia para receber as duas SubCadeias e concatenei na variavel de saida
        QuartaLista::Conjunto *subCadeia_Crescente=0;
        subCadeia_Crescente = conjuntoA->obterMaiorSubCadeiaCrescente();
        QString saidaSubCadeia = " Maior SubCadeia Ordenado Crescente:\n\n";
        saidaSubCadeia += "CONJUNTO A: " + subCadeia_Crescente->getConjunto();

        subCadeia_Crescente = conjuntoB->obterMaiorSubCadeiaCrescente();
        saidaSubCadeia += "\nCONJUNTO B: " + subCadeia_Crescente->getConjunto();
        delete subCadeia_Crescente; //deletei o objeto que não preciso mais

        ui->label_SaidaResultado->setText(saidaSubCadeia);
        ui->label_SaidaResultado->adjustSize();
    } catch (QString &erro)
    {
        QMessageBox::information(this,"ERRO",erro);
    }
}

void MainWindow::on_pushButton_MaiorSubCadeia_Decrescente_clicked()
{
    try
    {
         //usei a mesma variavel subCadeia para receber as duas SubCadeias e concatenei na variavel de saida
        QuartaLista::Conjunto *subCadeia_Descrecente=0;
        subCadeia_Descrecente = conjuntoA->obterMaiorSubCadeiaDecrescente();
        QString saidaSubCadeia = " Maior SubCadeia Ordenado Decrescente:\n\n";
        saidaSubCadeia += "CONJUNTO A: " + subCadeia_Descrecente->getConjunto();

        subCadeia_Descrecente = conjuntoB->obterMaiorSubCadeiaDecrescente();
        saidaSubCadeia += "\nCONJUNTO B: " + subCadeia_Descrecente->getConjunto();
        delete subCadeia_Descrecente;   //deletei o objeto que não preciso mais

        ui->label_SaidaResultado->setText(saidaSubCadeia);
        ui->label_SaidaResultado->adjustSize();
    } catch (QString &erro)
    {
        QMessageBox::information(this,"ERRO",erro);
    }
}

void MainWindow::on_pushButton_Mais_clicked()
{
    try
    {
        //Saber se o conjunto e vazio e jogar na gride
        QString eVazioConjuntoA = "Nao";
        if(conjuntoA->eConjuntoVazio()) eVazioConjuntoA = "Sim";
        eVazio_ConjuntoA = new QTableWidgetItem(eVazioConjuntoA);
        ui->tableWidget_Mais->setItem(0,0,eVazio_ConjuntoA);

        QString eVazioConjuntoB = "Nao";
        if(conjuntoB->eConjuntoVazio()) eVazioConjuntoB = "Sim";
        eVazio_ConjuntoB = new QTableWidgetItem(eVazioConjuntoB);
        ui->tableWidget_Mais->setItem(0,1,eVazio_ConjuntoB);

        //Saber se o conjunto e subConjunto do outro e jogar na gride
        QString eSubConjuntoA = "Nao";
        if(conjuntoA->eSubConjuntoDe(conjuntoB)) eSubConjuntoA = "Sim";
        eSub_ConjuntoA = new QTableWidgetItem(eSubConjuntoA);
        ui->tableWidget_Mais->setItem(1,0,eSub_ConjuntoA);

        QString eSubConjuntoB = "Nao";
        if(conjuntoB->eSubConjuntoDe(conjuntoA)) eSubConjuntoB = "Sim";
        eSub_ConjuntoB = new QTableWidgetItem(eSubConjuntoB);
        ui->tableWidget_Mais->setItem(1,1,eSub_ConjuntoB);

        //Saber se os conjuntos são identicos e jogar na gride
        QString eIdenticoConjuntos = "Nao";
        if(conjuntoA->eIdenticoHa(conjuntoB)) eIdenticoConjuntos = "Sim";
        eIdentico_ConjuntoA = new QTableWidgetItem(eIdenticoConjuntos);
        eIdentico_ConjuntoB = new QTableWidgetItem(eIdenticoConjuntos);
        ui->tableWidget_Mais->setItem(2,0,eIdentico_ConjuntoA);
        ui->tableWidget_Mais->setItem(2,1,eIdentico_ConjuntoB);

        //Saber se os conjuntos são disjuntos e jogar na gride
        QString eDisjuntoConjuntos = "Nao";
        if(conjuntoA->eDisjuntoHa(conjuntoB)) eDisjuntoConjuntos = "Sim";
        eDisjunto_ConjuntoA = new QTableWidgetItem(eDisjuntoConjuntos);
        eDisjunto_ConjuntoB = new QTableWidgetItem(eDisjuntoConjuntos);
        ui->tableWidget_Mais->setItem(3,0,eDisjunto_ConjuntoA);
        ui->tableWidget_Mais->setItem(3,1,eDisjunto_ConjuntoB);

        //Saber a amplitude dos conjutos e jogar na gride
        QString amplitudeConjuntoA = QString::number(conjuntoA->calcularAmplitude());
        amplitude_ConjuntoA = new QTableWidgetItem(amplitudeConjuntoA);
        ui->tableWidget_Mais->setItem(4,0,amplitude_ConjuntoA);

        QString amplitudeConjuntoB = QString::number(conjuntoB->calcularAmplitude());
        amplitude_ConjuntoB = new QTableWidgetItem(amplitudeConjuntoB);
        ui->tableWidget_Mais->setItem(4,1,amplitude_ConjuntoB);

        //Saber o produto escalar e jogar na gride
        try
        {
            QString produtoEscalarConjuntos = QString::number(conjuntoA->calcularProdutoEscalar(conjuntoB));
            produtoEscalarConjuntoA = new QTableWidgetItem(produtoEscalarConjuntos);
            produtoEscalarConjuntoB = new QTableWidgetItem(produtoEscalarConjuntos);
            ui->tableWidget_Mais->setItem(5,0,produtoEscalarConjuntoA);
            ui->tableWidget_Mais->setItem(5,1,produtoEscalarConjuntoB);
        } catch (QString)
        {
            produtoEscalarConjuntoA = new QTableWidgetItem("Não há");
            produtoEscalarConjuntoB = new QTableWidgetItem("Não há");
            ui->tableWidget_Mais->setItem(5,0,produtoEscalarConjuntoA);
            ui->tableWidget_Mais->setItem(5,1,produtoEscalarConjuntoB);
        } catch(std::bad_alloc&)
        {
             QMessageBox::information(this,"ERRO","sem espaço para alocar");
        }

        //Saber a Media Aritmetica ejogar na gride
        QString mediaAritmetica_A = QString::number(conjuntoA->calcularMediaAritmetica());
        media_Aritmetica_A = new QTableWidgetItem(mediaAritmetica_A);
        ui->tableWidget_Mais->setItem(6,0,media_Aritmetica_A);

        QString mediaAritmetica_B = QString::number(conjuntoB->calcularMediaAritmetica());
        media_Aritmetica_B = new QTableWidgetItem(mediaAritmetica_B);
        ui->tableWidget_Mais->setItem(6,1,media_Aritmetica_B);

        for(int i=0;i<7;i++) for(int j=0;j<2;j++) ui->tableWidget_Mais->item(i,j)->setTextAlignment(Qt::AlignCenter);

        ui->tableWidget_Mais->show();           //exibe a tabela
        this->setGeometry(450,100,514,633);     //Almenta a tela
        ui->pushButton_Mais->hide();            //some com o botão de almentar a tela
        ui->pushButton_Mais->setEnabled(false); //Desabilita o botão mais
        ui->pushButton_Menos->show();            //aparece o botão de diminuir a tela
        ui->pushButton_Menos->setEnabled(true); //habilita o botão menos

    } catch (QString &erro)
    {
        QMessageBox::information(this,"Erro",erro);
    }catch(std::bad_alloc&)
    {
         QMessageBox::information(this,"ERRO","Sem espaço para alocar");
    }
}

void MainWindow::on_pushButton_Menos_clicked()
{
    ui->tableWidget_Mais->hide();               //soma com a tabela
    this->setGeometry(450,100,514,375);         //leva embora um pedaço da tela com ela
    ui->pushButton_Menos->hide();               //esconde o botão de diminuir a tela
    ui->pushButton_Menos->setEnabled(false);    //desabilita o botão menos
    ui->pushButton_Mais->show();                //e o botão de almentar está de volta.
    ui->pushButton_Mais->setEnabled(true);      //habilita o botão mais novamente
}

void MainWindow::on_pushButton_UniaoOrdenada_clicked()
{
    try
    {
        QuartaLista::Conjunto *uniao_Ordenada=0;
        uniao_Ordenada = conjuntoA->uniaoOrdenada(conjuntoB);
        QString saidaUniaoOrdenada = " União Ordenada : " + uniao_Ordenada->getConjunto();
        ui->label_SaidaResultado->setText(saidaUniaoOrdenada);
        ui->label_SaidaResultado->adjustSize();
        delete uniao_Ordenada;
    } catch (QString &erro)
    {
        QMessageBox::information(this,"ERRO",erro);
    }
}
