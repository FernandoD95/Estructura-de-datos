#include "Cola.h"
/*
//Destructor
Cola::~Cola()
{
    while(frente) desencolar();
}
//Añadir elementos en la cola
void Cola::encolar(int v)
{
    pnodomaleta nuevo;
    nuevo = new NodoMaleta(v); // Se crea un nodo nuevo
// Si cola no vacía, se añade el nuevo a continuación de ultimo
    if(final) final->siguiente = nuevo;
//El último elemento de la cola es el nuevo nodo
    final = nuevo;
// Si 1º es NULL, la cola vacía, 1º apunta al nuevo nodo
    if(!frente) frente = nuevo;
}
//leer elementos de la cola
int Cola::desencolar()
{
    pnodomaleta nodomaleta; //Var aux para manipular nodo
    int v; //Var aux para retorno del valor
// Nodo apunta al primer elemento de la pila
    nodomaleta = frente;
    if(!nodomaleta) return 0; // Si no hay nodos en la pila se devuelve 0
//Se asigna a 1º la dirección del segundo nodo
    frente = nodomaleta->siguiente;
//Se guarda el valor de retorno
    v = nodomaleta->valor;
    delete nodomaleta; // Se borra el nodo
// Si cola vacía, ultimo d be e ser NULL t bié am n
    if(!frente) final = NULL;
    return v;
}
*/
