/* 
 * File:   main.cpp
 * Author: Pedro Lentini
 *
 * 
 * Created on April 10, 2014, 10:29 PM
 */

#include "xx.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    char mostrar[80];
    CajonPilas cajon1(10);
    Robot robot1(cajon1);
    sprintf(mostrar,"proceso main");
    write(fileno(stdout),mostrar,strlen(mostrar));
    
    
    

    return 0;
}

