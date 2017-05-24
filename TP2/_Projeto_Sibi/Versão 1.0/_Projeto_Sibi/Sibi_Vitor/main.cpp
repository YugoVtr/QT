#include "CadastroUsuario.h"
#include "ListarUsuario.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ListarUsuario w;
    w.show();

    return a.exec();
}
