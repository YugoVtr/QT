
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    tratamento_PrimeiroNumero(0),
    tratamento_SegundoNumero(0)
{
    ui->setupUi(this);
    ui->tableWidgetResultados->setEnabled(false);

    //LineEditPrimeiroNumero
    QRegExp tratamentoPrimeiroNumero("[0-9]*");
    tratamento_PrimeiroNumero = new QRegExpValidator(tratamentoPrimeiroNumero,ui->lineEditPrimeiroNumero);
    ui->lineEditPrimeiroNumero->setValidator(tratamento_PrimeiroNumero);
    //LineEditSegundoNumero
    QRegExp tratamentoSegundoNumero("[0-9]*");
    tratamento_SegundoNumero = new QRegExpValidator(tratamentoSegundoNumero,ui->lineEditSegundoNumero);
    ui->lineEditSegundoNumero->setValidator(tratamento_SegundoNumero);
}

MainWindow::~MainWindow()
{
    delete tratamento_PrimeiroNumero;
    delete tratamento_SegundoNumero;
    delete ui;
}

void MainWindow::on_pushButtonExibir_clicked()
{
    try
    {
    //Obter valores dos numeros e da base
        long primeiroNumero = ui->lineEditPrimeiroNumero->text().toLong();
        long segundoNumero = ui->lineEditSegundoNumero->text().toLong();

    //Criar Objetos
        TerceiraLista::NumerosNaturais primeiroNumeroNatural(primeiroNumero);
        TerceiraLista::NumerosNaturais segundoNumeroNatural(segundoNumero);

        //retorno do fatorial
        TerceiraLista::NumerosNaturais fatorialPrimeiroNumero;
        fatorialPrimeiroNumero=primeiroNumeroNatural.calcularFatorial();
        TerceiraLista::NumerosNaturais fatorialSegundoNumero;
        fatorialSegundoNumero=segundoNumeroNatural.calcularFatorial();

        //retorno do MMC
        TerceiraLista::NumerosNaturais MDC_PrimeiroNumero;
        MDC_PrimeiroNumero=primeiroNumeroNatural.calcularMDC(segundoNumeroNatural);
        TerceiraLista::NumerosNaturais MDC_SegundoNumero;
        MDC_SegundoNumero=segundoNumeroNatural.calcularMDC(primeiroNumeroNatural);

        //retorno do MDC
        TerceiraLista::NumerosNaturais MMC_PrimeiroNumero;
        MMC_PrimeiroNumero=primeiroNumeroNatural.calcularMMC(segundoNumeroNatural);
        TerceiraLista::NumerosNaturais MMC_SegundoNumero;
        MMC_SegundoNumero=segundoNumeroNatural.calcularMMC(primeiroNumeroNatural);

    //Criar QStrings para as saidas
        QString primeiroFatorial = QString::number(fatorialPrimeiroNumero.get());
        if(fatorialPrimeiroNumero.get() == 0) primeiroFatorial = " NULL ";
        QString segundoFatorial = QString::number(fatorialSegundoNumero.get());
        if(fatorialSegundoNumero.get() == 0) segundoFatorial = " NULL ";

        QString eNumeroPefeito_Primeiro = "NAO";
        if(primeiroNumeroNatural.eNumeroPerfeito())  eNumeroPefeito_Primeiro="SIM";
        QString eNumeroPefeito_Segundo = "NAO";
        if(segundoNumeroNatural.eNumeroPerfeito())  eNumeroPefeito_Segundo="SIM";

        QString eCapicua_Primeiro = "NAO";
        if(primeiroNumeroNatural.eCapicua()) eCapicua_Primeiro = "SIM";
        QString eCapicua_Segundo = "NAO";
        if(segundoNumeroNatural.eCapicua()) eCapicua_Segundo="SIM";

        QString eQuadradoPerfeito_Primeiro="NAO";
        if(primeiroNumeroNatural.eQuadradoPerfeito()) eQuadradoPerfeito_Primeiro="SIM";
        QString eQuadradoPerfeito_Segundo="NAO";
        if(segundoNumeroNatural.eQuadradoPerfeito()) eQuadradoPerfeito_Segundo="SIM";

        QString eNumeroPrimo_Primeiro="NAO";
        if(primeiroNumeroNatural.eNumeroPrimo()) eNumeroPrimo_Primeiro="SIM";
        QString eNumeroPrimo_Segundo="NAO";
        if(segundoNumeroNatural.eNumeroPrimo()) eNumeroPrimo_Segundo="SIM";

        QString maximoDivisorComum_1 = QString::number(MDC_PrimeiroNumero.get());
        QString maximoDivisorComum_2 = QString::number(MDC_SegundoNumero.get());
        QString minimoMultiploComum_1 = QString::number(MMC_PrimeiroNumero.get());
        QString minimoMultiploComum_2 = QString::number(MMC_SegundoNumero.get());

        QString ePrimoCom_entreNumeros = "NAO";
        if(primeiroNumeroNatural.ePrimoCom(segundoNumeroNatural)) ePrimoCom_entreNumeros = "SIM";

     //Criar Itens
         QTableWidgetItem*fatorial1 = new QTableWidgetItem(primeiroFatorial);
         QTableWidgetItem*fatorial2 = new QTableWidgetItem(segundoFatorial);

         QTableWidgetItem*numeroPerfeito1 = new QTableWidgetItem(eNumeroPefeito_Primeiro);
         QTableWidgetItem*numeroPerfeito2 = new QTableWidgetItem(eNumeroPefeito_Segundo);

         QTableWidgetItem*capicua1 = new QTableWidgetItem(eCapicua_Primeiro);
         QTableWidgetItem*capicua2 = new QTableWidgetItem(eCapicua_Segundo);

         QTableWidgetItem*quadradoPerfeito1 = new QTableWidgetItem(eQuadradoPerfeito_Primeiro);
         QTableWidgetItem*quadradoPerfeito2 = new QTableWidgetItem(eQuadradoPerfeito_Segundo);

         QTableWidgetItem*numeroPrimo1 = new QTableWidgetItem(eNumeroPrimo_Primeiro);
         QTableWidgetItem*numeroPrimo2 = new QTableWidgetItem(eNumeroPrimo_Segundo);

         QTableWidgetItem*paraBaseHexa1 = new QTableWidgetItem(primeiroNumeroNatural.mudarBase(16));
         QTableWidgetItem*paraBaseHexa2 = new QTableWidgetItem(segundoNumeroNatural.mudarBase(16));
         QTableWidgetItem*paraBaseOcta1 = new QTableWidgetItem(primeiroNumeroNatural.mudarBase(8));
         QTableWidgetItem*paraBaseOcta2 = new QTableWidgetItem(segundoNumeroNatural.mudarBase(8));
         QTableWidgetItem*paraBaseBinaria1 = new QTableWidgetItem(primeiroNumeroNatural.mudarBase(2));
         QTableWidgetItem*paraBaseBinaria2 = new QTableWidgetItem(segundoNumeroNatural.mudarBase(2));

         QTableWidgetItem*maximoDivisor1 = new QTableWidgetItem(maximoDivisorComum_1);
         QTableWidgetItem*maximoDivisor2 = new QTableWidgetItem(maximoDivisorComum_2);

         QTableWidgetItem*minimoMultiplo1 = new QTableWidgetItem(minimoMultiploComum_1);
         QTableWidgetItem*minimoMultiplo2 = new QTableWidgetItem(minimoMultiploComum_2);

         QTableWidgetItem*primoCom1 = new QTableWidgetItem(ePrimoCom_entreNumeros);
         QTableWidgetItem*primoCom2 = new QTableWidgetItem(ePrimoCom_entreNumeros);

     //Imprimir na gride
         ui->tableWidgetResultados->setItem(0,0,fatorial1);
         ui->tableWidgetResultados->setItem(0,1,fatorial2);
         ui->tableWidgetResultados->setItem(1,0,numeroPerfeito1);
         ui->tableWidgetResultados->setItem(1,1,numeroPerfeito2);
         ui->tableWidgetResultados->setItem(2,0,capicua1);
         ui->tableWidgetResultados->setItem(2,1,capicua2);
         ui->tableWidgetResultados->setItem(3,0,quadradoPerfeito1);
         ui->tableWidgetResultados->setItem(3,1,quadradoPerfeito2);
         ui->tableWidgetResultados->setItem(4,0,numeroPrimo1);
         ui->tableWidgetResultados->setItem(4,1,numeroPrimo2);
         ui->tableWidgetResultados->setItem(5,0,paraBaseHexa1);
         ui->tableWidgetResultados->setItem(5,1,paraBaseHexa2);
         ui->tableWidgetResultados->setItem(6,0,paraBaseOcta1);
         ui->tableWidgetResultados->setItem(6,1,paraBaseOcta2);
         ui->tableWidgetResultados->setItem(7,0,paraBaseBinaria1);
         ui->tableWidgetResultados->setItem(7,1,paraBaseBinaria2);
         ui->tableWidgetResultados->setItem(8,0,maximoDivisor1);
         ui->tableWidgetResultados->setItem(8,1,maximoDivisor2);
         ui->tableWidgetResultados->setItem(9,0,minimoMultiplo1);
         ui->tableWidgetResultados->setItem(9,1,minimoMultiplo2);
         ui->tableWidgetResultados->setItem(10,0,primoCom1);
         ui->tableWidgetResultados->setItem(10,1,primoCom2);
         for(int i=0;i<11;i++) for(int j=0;j<2;j++) ui->tableWidgetResultados->item(i,j)->setTextAlignment(Qt::AlignCenter);

    } catch (QString &erro)
    {QMessageBox::information(this,"ERRO",erro);}
}

void MainWindow::on_pushButton_clicked()
{
    ui->tableWidgetResultados->clearContents(); //Limpar Gride
}
