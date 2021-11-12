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
    list<Grafo> lgrafo;
    int c = 0;
    while(c != 5){
        cout<< "--- QUE TAREA DESEAS REALIZAR ---" << endl;
        cout << "01 CREAR GRAFO." << endl;
        cout << "02 AGREGAR UN VERTICE A UN GRAFO ESPECIFICO" << endl;
        cout << "03 AGREGAR UNA ARISTA A UN GRAFO ESPECIFICO" << endl;
        cout << "04 IMPRIMIR UN GRAFO" << endl;
        cout << "05 SALIR DEL PROGRAMA" << endl;
        cin>>c;
        switch(c)
        {
            case 1:
            {
                Cset stv("entero");
                Cset ste("secuencia");
                Grafo g(stv, ste);
                lgrafo.push_back(g);
            }
            break;
            case 2:
            {
                int n=0;
                int i=0;
                int j=0;
                list<Grafo> lcentinela;
                cout<<"\t Escribe el indice del grafo a afectar. [ 0 - "<<(lgrafo.size()-1)<<" ]"<<endl;
                cin>>i;
                cout<<"\t Ingresa el numero a insertar:"<<endl;
                cin>>n;
                if(i>=0&&i<lgrafo.size()){
                    list<Grafo> ::iterator pos;
                    pos = lgrafo.begin();
                    while(pos != lgrafo.end()){
                        Grafo cs = *pos;
                        if(i==j){
                            cs.stv.insertarElemento(n);
                            cs.stv.imprimir();
                        }
                        lcentinela.push_back(cs);
                        pos++;
                        j++;
                    }
                    lgrafo = lcentinela;

                }else{
                    cout<<"Indice invalido, el grafo al que trata de acceder no existe"<<endl;
                }
            }
            break;
            case 3:
            {
                int n=0;
                int m=0;
                int i=0;
                int j=0;
                list<Grafo> ::iterator pos;
                Cset stv("entero");
                Cset ste("secuencia");
                Grafo cs  (stv, ste);
                list<Grafo> lcentinela;
                cout<<"\t Escribe el indice del grafo a afectar. [ 0 - "<<(lgrafo.size()-1)<<" ]"<<endl;
                cin>>i;
                if(i>=0&&i<lgrafo.size()){
                    pos = lgrafo.begin();
                    while(pos != lgrafo.end()){
                        if(i==j){
                            cs = *pos;
                        }
                        pos++;
                        j++;
                    }
                }
                Csecuencia f;
                //cout<<"\t VERTICES ACTUALES DEL GRAFO: "<<cs.stv.imprimir()<<endl;
                cout<<"\t Ingresa el primer vertice de la arista a insertar:"<<endl;
                cin>>n;
                f.insertarElemento(n);
                cout<<"\t Ingresa el segundo vertice de la arista a insertar:"<<endl;
                cin>>m;
                f.insertarElemento(m);
                cs.ste.insertarElemento(f);
                j=0;

                pos = lgrafo.begin();
                while(pos != lgrafo.end()){
                    Grafo t = *pos;
                    if(i==j){
                        lcentinela.push_back(cs);
                    }else{
                        lcentinela.push_back(t);
                    }
                    pos++;
                    j++;
                }
                lgrafo = lcentinela;

            }
            break;
            case 4:
            {
                int i=0;
                int j=0;
                cout<<"\t Escribe el indice del grafo a imprimir. [ 0 - "<<(lgrafo.size()-1)<<" ]"<<endl;
                cin>>i;
                if(i>=0&&i<lgrafo.size()){
                    list<Grafo> ::iterator pos;
                    pos = lgrafo.begin();
                    while(pos != lgrafo.end()){
                        if(i==j){
                            cout<<"G = { ";
                            Grafo cs = *pos;
                            cs.stv.imprimir();
                            cout<<",";
                            cs.ste.imprimir();
                            //cs.stv.insertarElemento(n);
                            cout<<" }"<<endl;
                        }
                        pos++;
                        j++;
                    }
                }else{
                    cout<<"Indice invalido, el grafo al que trata de acceder no existe"<<endl;
                }
            }
            break;

            case 5:
                cout<<"FIN DEL PROGRAMA..."<<endl;
                break;
            default: cout<<"El numero ingresado es invalido intentalo de nuevo."<<endl;
        }
        if(c>=1&&c<5){
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
