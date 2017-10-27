#include "ColaMaletas.h"

/*ColaMaletas::ColaMaletas()
{
    //ctor
}*/

ColaMaletas::~ColaMaletas()
{
    while (frente) desencolar().~Maleta();
}
void ColaMaletas::encolar (Maleta mal)
{
    pnodomaleta nuevo;
    nuevo = new NodoMaleta(mal);
    if(final){
        final->siguiente=nuevo;
        final=nuevo;
    }
    if(!frente){
        frente=nuevo;
        final=nuevo;
    }
}
Maleta ColaMaletas::desencolar()
{
    pnodomaleta nodomaleta;
    Maleta mal;
    nodomaleta=frente;
    if(!nodomaleta) return mal;
    frente=nodomaleta->siguiente;
    mal=nodomaleta->maleta;   //Como pretende que accedamos aqui si es privado?
    delete nodomaleta;
    if (!frente)final=NULL;
    return mal;
}
