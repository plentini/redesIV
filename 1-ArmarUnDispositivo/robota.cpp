/* 
 * File:   robota.cpp
 * Author: Pedro Lentini
 *
 * Created on April 18, 2014, 10:58 AM
 */

#include "xx.h"

/*
 * 
 */
int main(int argc, char** argv) {
    
    char mostrar[80];
    sprintf(mostrar,"\x1b[1;36m Robot A:: \x1b[1;m\n ");
    write(fileno(stdout),mostrar,strlen(mostrar));
    
    const char * clave="clave";
    
    

    return 0;
}

