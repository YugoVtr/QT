#include<string>
#include<iostream>
#include<matriz.h>

int main()
{
    try {
        TP2::Matriz<float> mat(2,2);
        mat.setElemento(1.1,0,0);
        mat.setElemento(2.2,0,1);
        mat.setElemento(3.3,1,0);
        mat.setElemento(4.4,1,1);

        std::cout<<"Mat[0][0]= "<<mat.getElemento(0,0)<<std::endl;
        std::cout<<"Mat[0][1]= "<<mat.getElemento(0,1)<<std::endl;
        std::cout<<"Mat[1][0]= "<<mat.getElemento(1,0)<<std::endl;
        std::cout<<"Mat[1][1]= "<<mat.getElemento(1,1)<<std::endl;
    } catch (...) {
    }


}
