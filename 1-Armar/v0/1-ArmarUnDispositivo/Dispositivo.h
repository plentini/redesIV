/* 
 * File:   Dispositivo.h
 * Author: Pedro Lentini
 *
 * Created on April 10, 2014, 11:03 PM
 */

#ifndef DISPOSITIVO_H
#define	DISPOSITIVO_H

class Dispositivo {
public:
    Dispositivo();
    Dispositivo(const Dispositivo& orig);
    virtual ~Dispositivo();
    void armar(Pila pila){this->pila= pila; estado= ARMADO;};
    
private:
    enum Estado{ SINPILAS, ARMADO, ACTIVO};
    Estado estado;
    Pila pila;

};
Dispositivo::Dispositivo() {
    estado=SINPILAS;
}

Dispositivo::Dispositivo(const Dispositivo& orig) {
}

Dispositivo::~Dispositivo() {
}
#endif	/* DISPOSITIVO_H */

