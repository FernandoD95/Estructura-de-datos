#include "ColaPersonas.h"

/*ColaPersonas::ColaPersonas()
{

}*/
//Desencolar
ColaPersonas::~ColaPersonas()
{
   while (frente) desencolar();
}
//Añadir elemento
void ColaPersonas::encolar(Persona per)
{
    pnodo nuevo;
    nuevo = new Nodo(per); //Crea un nuevo nodo
    //si la cola no esta vacia se añade el primer elemento a continuacion del ultimo
    if(final)
    {final->siguiente =nuevo;
    //El nuevo elemnto del la cola es el nuevo nodo
    final = nuevo;
    }
    //si 1º es null, la cola esta vacia ,1º apunta al nuevo ndo
    if(!frente) {frente=nuevo; final= nuevo;}
}
//leer elementos de la cola
Persona ColaPersonas::desencolar()
{
    pnodo nodo;//variable auxiliar para manipular el nodo
    Persona per;//variable auxiliar para devolver el valor
    //nodo apunta al primer elemento de la cola
    nodo= frente;
    if (!nodo) return per;//si no hay nodos en la pila se devuelve 0
    //al 1º se le asigna el valor del segundo nodo
    frente =nodo->siguiente;
    //guardamos en per el valor de retorno
    per= nodo->persona;
    delete nodo;//se borra el nodo
    if(!frente) final=NULL;
    return per;
}
