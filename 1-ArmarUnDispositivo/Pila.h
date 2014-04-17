/* 
 * File:   Pila.h
 * Author: Pedro Lentini
 *
 * Created on April 11, 2014, 12:56 AM
 */

#ifndef PILA_H
#define	PILA_H

class Pila {
public:
    Pila();
    Pila(const Pila& orig);
    virtual ~Pila();
private:
    int carga;

};
Pila::Pila() {
    carga = 100;
}

Pila::Pila(const Pila& orig) {
}

Pila::~Pila() {
}
#endif	/* PILA_H */

