#ifndef MALETA_H
#define MALETA_H
#include <string>

class Maleta
{
    public:
        maleta(int p, int cod, char et){
            Peso=p;
            CodigoMaleta=cod;
            Etiqueta=et;
        }
        maleta();
        virtual ~Maleta();
        int peso();
        int codigomaleta();
        char *etiqueta();
    protected:

    private:
        int Peso;
        int CodigoMaleta; //identificador de la maleta
        char Etiqueta;    //codigo con toda la informacion de la maleta
        // A.origen, A.destino, identificador vuelo,
        // localizador maleta , fecha, hora de salida, información de pasajero
        friend class Maleta;

};

#endif // MALETA_H
