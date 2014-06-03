/* 
 * File:   componentebandeja.cpp
 * Author: Pedro Lentini
 *
 * Created on April 24, 2014, 10:35 PM
 */

#include <cstdlib>

#include "p_mq.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char mostrar[80];
    sprintf(mostrar,"componentebandeja::\n");
    write(fileno(stdout),mostrar,strlen(mostrar));
    mpdu *recibido;
    p_mq cola("iband-compband");
    recibido = cola.receive();
    
    sprintf(mostrar,recibido->getSdu());
    write(fileno(stdout),mostrar,strlen(mostrar));

    return 0;
}

