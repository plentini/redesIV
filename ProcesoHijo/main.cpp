/* 
 * File:   main.cpp
 * Author: Pedro Lentini
 *
 * Created on April 13, 2014, 11:34 AM
 */

#include "xx.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int parametro; //parámetro a pasar al proceso hijo
    unsigned childpid; //pid del hijo
    char mostrar[80];
    char *pname;   //nombre del programa
    static char el_parametro[14]; //parámetro string para el proceso hijo
    pname = argv[0]; //obtiene el nombre del programa en ejecución
    
    /* 
     Instrucciones con todas las inicializaciones y creación de los IPC*/
    
    /*se muestra un mensaje en la pantalla indicando el contenido del
     parámetro que se pasa al programa invocado con la exec en el hijo*/
    
    /* convertir el parametro de integer a string */
    sprintf(el_parametro,"%d\n",parametro);
    
    /* Si entre el fork y la exec no se usa ninguna variable del proceso
     padre, Linux usa COW*/
    
    if ((childpid = fork())<0){/*Se crea el proceso hijo */
        perror("Error en el fork");
        exit(1);
    }
    
    if((childpid == 0)) {
        /* PROCESO HIJO (child)*/
        
        execlp("./pepe","pepe",el_parametro,(char *)0);
        /* si sigue es que no se ejecuto correctamente el comando exclp*/
        exit(3);
    }
    sprintf(mostrar,"proceso padre");
    write(fileno(stdout),mostrar,strlen(mostrar));
    
    
    return(0);
}