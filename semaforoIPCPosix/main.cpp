/* 
 * File:   main.cpp
 * Author: pedro
 *
 * Created on April 5, 2014, 4:31 PM
 */

#include <cstdlib>

#include "Semafo.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int resultado;
    char mostrar[80]; //mensaje para mostrar en pantalla
    //crear el semaforo e inicializarlo si no existe
    Semafo semaforo("bicolor",1);
    sprintf (mostrar,"semaforo creado en proceso 1 \n");
    write(fileno(stdout),mostrar,strlen(mostrar));
    
    for(int i=0;i<8;i++){
        sleep(4);
        semaforo.sema_wait();
        sprintf (mostrar,"entra al ataud \n");
        write(fileno(stdout),mostrar,strlen(mostrar));
        sleep(4);
        semaforo.sema_signal();
        sprintf (mostrar,"sale del ataud \n");
        write(fileno(stdout),mostrar,strlen(mostrar));
    }
    if(semaforo.sema_close()==0){
        sprintf (mostrar,"semaforo close \n");
        write(fileno(stdout),mostrar,strlen(mostrar));
    }
    
    /*
    if(semaforo.sema_unlink()==0){
        sprintf (mostrar,"semaforo unlink \n");
        write(fileno(stdout),mostrar,strlen(mostrar));
    }
    
    */
    
    return 0;
}

