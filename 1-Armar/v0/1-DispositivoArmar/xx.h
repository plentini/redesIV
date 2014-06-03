/* 
 * File:   xx.h
 * Author: Pedro Lentini
 *
 * Created on April 18, 2014, 5:48 PM
 */

#ifndef XX_H
#define	XX_H

#include <cstdlib>
#include <string.h> //para el strlen
#include <stdio.h>  //para el sprintf
#include <unistd.h> //para usar fork
#include <iostream>

#include <sys/ipc.h> //constantes ipc para shared memory y semaforos?
#include <sys/shm.h> //para shared memory

//para semaforos

#include <fcntl.h>
#include <sys/stat.h>
#include <semaphore.h>
#include <unistd.h>

#include "IBandeja.h"

#endif	/* XX_H */

