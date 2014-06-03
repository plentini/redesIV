/* 
 * File:   robotb.cpp
 * Author: Pedro Lentini
 *
 * Created on April 18, 2014, 10:59 AM
 */

#include "xx.h"

/*
 * 
 */
int main(int argc, char** argv) {
    char mostrar[80];
    sprintf(mostrar,"\x1b[1;35m Robot B::\x1b[1;m\n");
    write(fileno(stdout),mostrar,strlen(mostrar));
    

    return 0;
}

