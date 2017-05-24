#ifndef CRUD_H
#define CRUD_H
#include"QList"

namespace Vitor
{
	template<class Tipo> 
	class CRUD
	{
	public:
        virtual ~CRUD(){}
		virtual void incluir(Tipo &objeto) const = 0;
        virtual void alterar(Tipo &objeto) const =0;
        virtual QList<Tipo>* listagem() const = 0;
	};
}
#endif // CRUD_H
