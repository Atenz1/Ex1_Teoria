#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <list>
#include<stdlib.h>
#include "Conjunto.h"
#include "Csecuencia.h"
#include "Cset.h"
#include "Grafo.h"

using namespace std;


void imprimirLista(list<int>& datos){
    list<int> ::iterator pos;
    list<int> ::iterator fin;
    pos = datos.begin();
    fin = datos.end();
    fin--;
    cout<<"Lista -> ";
    cout<<" { ";
    while(pos != datos.end()){
        cout<<*pos;
        if(pos != fin){
            cout<<" , ";
        }
        pos++;
    }
    cout<<" }"<<endl;
}

int main()
{
    list<Conjunto*> lconjunto;
    int c = 0;
    while(c != 8){
        cout<< "--- QUE TAREA DESEAS REALIZAR ---" << endl;
        cout << "01 CREAR GRAFO." << endl;
        cout << "02 CREAR VERTICES" << endl;
        cout << "03 CREAR ARISTA" << endl;
        cout << "04 IMPRIMIR GRAFO" << endl;
        cout << "05 IMPRIMIR LISTA DE GRAFOS EXISTENTES" << endl;
        cout << "06 SALIR DEL PROGRAMA" << endl;
        cin>>c;
        switch(c)
        {
            case 1:
            {

            }
            break;
            case 2:
            {

            }
            break;
            case 3:
            {

            }
            break;
            case 4:
            {

            }
            break;
            case 5:
            {

            }
            break;

            case 6:
                cout<<"FIN DEL PROGRAMA..."<<endl;
                break;
            default: cout<<"El numero ingresado es invalido intentalo de nuevo."<<endl;
        }
        if(c>=1&&c<6){
            int cl=0;
            cout<<" "<<endl;
            cout<<"DESEAS LIMPIAR LA PANTALL?"<<endl;
            cout<<"01 SI"<<endl;
            cout<<"02 NO"<<endl;
            cin>>cl;
            if(cl==1){
                system("cls"); //Limpia la pantalla con ms dos.
            }
        }

    }
    return 0;
}
