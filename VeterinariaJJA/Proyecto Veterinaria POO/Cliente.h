#ifndef CLIENTE_H
#define CLIENTE_H 

#include <iostream>


using std::string; 

class Cliente{
    private:
        double telefono;
        double identificacion;
        string nombre;
        string email;

    public:
        void setTelefono(double identificacion);
        void setIdentificacion(double identificacion);
        void setNombre(string nombre);
        void setEmail(string email);
        double getTelefono();
        double getIdentificacion();
        string getNombre();
        string getEmail();

};

#endif