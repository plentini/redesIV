/* 
 * File:   Semafo.h
 * Author: pedro
 *
 * Created on April 5, 2014, 10:33 PM
 */

#ifndef SEMAFO_H
#define	SEMAFO_H
#include <fcntl.h>
#include <sys/stat.h>
#include <semaphore.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

class Semafo {
public:
    Semafo(char *identif,int inicial);
    Semafo(char *identif);
    Semafo(const Semafo& orig);
    virtual ~Semafo();
    int sema_wait(); //ocupar el semáforo P wait
    int sema_signal(); //liberar el semáforo V signal
    int sema_close();  //terminar de usar el semáforo en un proceso
    int sema_unlink(); /* eliminar el semaforo del sistema */
private:
    sem_t *s; //semáforo creado
    char *identifi; //nombre del semáforo debe comenzar con *
    //int inicial;   // valor inicial del semaforo
    char mostrar[80]; //mensaje para mostrar en pantalla
};

#endif	/* SEMAFO_H */

