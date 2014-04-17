/* 
 * File:   CajonPilas.h
 * Author: Pedro Lentini
 *
 * Created on April 11, 2014, 12:55 AM
 */

#ifndef CAJONPILAS_H
#define	CAJONPILAS_H

class CajonPilas {
public:
    CajonPilas(int pilas);
    CajonPilas(const CajonPilas& orig);
    virtual ~CajonPilas();
    Pila tomarPila();
    bool hayPilas();
private:
    int pilas;

};
CajonPilas::CajonPilas(int pilas) {
    this->pilas=pilas;
}

CajonPilas::CajonPilas(const CajonPilas& orig) {
}

CajonPilas::~CajonPilas() {
}

Pila CajonPilas::tomarPila(){
    Pila pila;
    pilas--;
    return pila;
}

bool CajonPilas::hayPilas(){
    return pilas>0;
}

#endif	/* CAJONPILAS_H */

