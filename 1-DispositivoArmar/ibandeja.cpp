/* 
 * File:   ibandeja.cpp
 * Author: Pedro Lentini
 *
 * Created on April 18, 2014, 5:50 PM
 */

#include "xx.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char mostrar[80];
    
    sprintf(mostrar,"proceso ibandeja");
    write(fileno(stdout),mostrar,strlen(mostrar));

    return 0;
}

