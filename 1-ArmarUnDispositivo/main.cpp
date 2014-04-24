/* 
 * File:   main.cpp
 * Author: Pedro Lentini
 *
 * 
 * Created on April 10, 2014, 10:29 PM
 * 
 * El robot1 crea el proceso ibandeja.
 * 
 */

#include "xx.h"



/*
 * 
 */
int main(int argc, char** argv) {
    
    char mostrar[80];
    
    sprintf(mostrar,"\x1b[02;11m proceso main \x1b[02;m\n ");
    write(fileno(stdout),mostrar,strlen(mostrar));
    CajonPilas cajon1(10);
    Robot robot1(cajon1,1);
    Robot robot2(cajon1,0);

    
    
    
    
    
    

    return 0;
}

