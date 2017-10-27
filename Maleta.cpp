#include "Maleta.h"

/*Maleta::Maleta()
{
    //ctor
}*/
//El ::~ significa destructor
Maleta::~Maleta()
{
    //dtor
}

int Maleta::peso()  //Para estas funciones hay que declarar la funcion en la propia clase
{
    return Peso;
}
int Maleta::codigomaleta(){
    return CodigoMaleta;
}
char Maleta::etiqueta(){
    return Etiqueta;
}
