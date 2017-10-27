#ifndef COLAPERSONAS_H
#define COLAPERSONAS_H
#include "Persona.h"
#include <iostream>

class Nodo
{
   private:
        Persona persona;
        Nodo *siguiente;
        friend class ColaPersonas;
    public:
        Nodo(Persona per, Nodo *sig = NULL)
        {
        persona = per;
        siguiente = sig;
        }
};
typedef Nodo *pnodo;

class ColaPersonas
{
    public:
        ColaPersonas(): final(NULL), frente(NULL) {}
        ~ColaPersonas();
        void encolar(Persona per);
        Persona desencolar();
    private:
        pnodo frente, final;
};


#endif // COLA_H
