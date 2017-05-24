#ifndef DEBUG_H
#define DEBUG_H

#include <string>
#include <iostream>

using namespace std;

// Imprime uma mensagem de debug na tela
//  caso a flag DEBUG esteja definida
inline void debug(const string& msg)
{
    #ifdef DEBUG
       cout << msg << endl;
    #endif
}

#endif
