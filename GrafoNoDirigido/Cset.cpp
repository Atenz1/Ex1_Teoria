#include "Cset.h"

Cset::Cset(string tipoSe){
    tipoSet = tipoSe;
    tipoC="set";
}

void Cset::imprimir(){
    list<int> ::iterator pos;
    list<int> ::iterator fin;
    pos = datos.begin();
    fin = datos.end();
    fin--;
    cout<<" { ";
    while(pos != datos.end()){
        cout<<*pos;
        if(pos != fin){
            cout<<" , ";
        }
        pos++;
    }
    cout<<" }";
}

void Cset::insertarElemento(int n){
    bool hayRepetidos = false;
    list<int> ::iterator pos;
    pos = datos.begin();
    while(pos != datos.end()){
        if(*pos == n){
            hayRepetidos = true;
            break;
        }
        pos++;
    }
    if(!hayRepetidos){
        datos.push_back(n);
    }else{
        cout<<"El valor ya existe en el SET."<<endl;
    }
}


