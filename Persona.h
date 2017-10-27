#ifndef PERSONA_H
#define PERSONA_H
#include <string.h>
//#include "billete.h"

struct Billete
{
    char idVuelo[8];//numero del vuelo
    char codigo[15];
    int hora;
    char origen[4];
    char destino[4];
    int localizador;
    void creador(int ho,char orig[],char des[], int loc )
    {
     strcpy(idVuelo,des+(char)ho);
     strcpy(origen,orig);
     hora=ho;
     strcpy(destino,des);
     localizador=loc;
     char con[30];
     strcpy(con,idVuelo);
     strcat(con,"  "+(char)loc);
     strcpy(codigo,con);
    }



};

class Persona
{
    public:
        Persona();
        virtual ~Persona();


    private:
        char id;
        int codigoMaleta;  //identificador de la maleta
        Billete bill;
        int numMalestas;//Numero de maletas que lleva el cliente


};

#endif // PERSONA_H
