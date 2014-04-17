/* 
 * File:   xx.h
 * Author: Pedro Lentini
 *
 * Created on April 13, 2014, 11:41 AM
 */

#ifndef XX_H
#define	XX_H

#include <cstdlib>
#include <string.h> //para el strlen
#include <stdio.h>  //para el sprintf
#include <unistd.h> //para usar fork

#include <sys/ipc.h> //constantes ipc para shared memory y semaforos?
#include <sys/shm.h> //para shared memory

//para semaforos

#include <fcntl.h>
#include <sys/stat.h>
#include <semaphore.h>
#include <unistd.h>

#include "Semafo.h"


//para este proyecto
#define SHM 200
#define MUTEX 201
#define DIRECTORIO "/home/knoppix/NetBeansProjects" //SharedMemory"

typedef struct{
    int x,y;
}t_rectangulo;

#endif	/* XX_H */

