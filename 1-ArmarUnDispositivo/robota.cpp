/* 
 * File:   robota.cpp
 * Author: Pedro Lentini
 *
 * Created on April 18, 2014, 10:58 AM
 */

#include "xx.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    char mostrar[80];
    sprintf(mostrar,"proceso hijo!!!");
    write(fileno(stdout),mostrar,strlen(mostrar));

    return 0;
}

