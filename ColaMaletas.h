#ifndef COLAMALETAS_H
#define COLAMALETAS_H
#include "Maleta.h"
#include <iostream>
class NodoMaleta
{
   private:
        Maleta maleta;
        NodoMaleta *siguiente;
        friend class ColaMaletas;
    public:
        NodoMaleta(Maleta mal, NodoMaleta *sig = NULL)
        {
        maleta=mal;//new Maleta(/*mal.peso(),mal.codigomaleta(),mal.etiqueta()*/);
        siguiente = sig;
        }
};
typedef NodoMaleta *pnodomaleta;


class ColaMaletas
{
    public:
        ColaMaletas(): final(NULL), frente(NULL) {}
        ~ColaMaletas();
        void encolar(Maleta mal);
        Maleta desencolar();
    private:
        pnodomaleta frente, final;
};



#endif // COLAMALETAS_H
