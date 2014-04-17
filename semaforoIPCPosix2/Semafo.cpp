/* 
 * File:   Semafo.cpp
 * Author: pedro
 * 
 * Created on April 5, 2014, 10:33 PM
 */

#include "Semafo.h"

Semafo::Semafo(char *identif,int inicial) {
    identifi=identif;
    s = sem_open(identif,O_CREAT | O_EXCL,0644,inicial);
    if (s==SEM_FAILED){
        sprintf (mostrar,"semaforo FALLO \n");
        write(fileno(stdout),mostrar,strlen(mostrar));
        perror("");
    } 
}

Semafo::Semafo(char *identif) {
    identifi=identif;
    s = sem_open(identif,0,0644);  
    if (s==SEM_FAILED){
        sprintf (mostrar,"semaforo FALLO \n");
        write(fileno(stdout),mostrar,strlen(mostrar));
        perror("");
    } 
}

Semafo::Semafo(const Semafo& orig) {
}

Semafo::~Semafo() {
}

int Semafo::sema_wait(){
    return sem_wait(s);
}

int Semafo::sema_signal(){
    return sem_post(s);
}

int Semafo::sema_close(){
    return sem_close(s);
}

int Semafo::sema_unlink(){
    return sem_unlink(identifi);
}


