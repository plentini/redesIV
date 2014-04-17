/* 
 * File:   pepe.cpp
 * Author: Pedro Lentini
 *
 * Created on April 13, 2014, 12:17 PM
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

