#include <iostream>
#include <TabelaHash.h>
int f(int a)
{
    return a ;
}
int (*y)(int a) = f;
int main( )
{
    try
    {
        ED2::TabelaHash<int> novo(20);
        std::cout << novo.getSize() <<"\n\n";
        novo.insert(20,(*y));

    } catch (std::string& erro) { std::cout << erro << std::endl; }
}
