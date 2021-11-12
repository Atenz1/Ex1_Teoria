#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <list>
#include<stdlib.h>
#include "Conjunto.h"
#include "Cset.h"
#ifndef GRAFO_H
#define GRAFO_H

using namespace std;

class Grafo
{
    public:
        Cset stv;
        Cset ste;
        Grafo(Cset Vr, Cset Er);

};

#endif // GRAFO_H
