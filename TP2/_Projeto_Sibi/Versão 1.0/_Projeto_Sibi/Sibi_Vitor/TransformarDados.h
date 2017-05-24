#ifndef TRANSFORMARDADOS_H
#define TRANSFORMARDADOS_H
#include <QString>

namespace Vitor
{
    class TransformarDados
    {
    public:
        virtual ~TransformarDados(){}
        virtual void montarObjeto(QString &str) = 0;
        virtual QString desmontarObjeto()const = 0;
    };
}
#endif // TRANSFORMARDADOS_H
