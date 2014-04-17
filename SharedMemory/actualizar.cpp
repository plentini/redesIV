/* 
 * File:   actualizar.cpp
 * Author: Pedro Lentini
 *
 * Created on April 13, 2014, 4:39 PM
 */

#include "xx.h"


using namespace std;

/*
 * 
 */
int main(int argc, char* argv[]) {
    key_t clave; /*clave que devuelve ftok */
    char mostrar[200];
    char pname;
    int pid;
    int shmid;
    t_rectangulo *shmem;
    //pname = argv[0]; //nombre de este programa
    pid = getpid(); //pid del programa que se esta corriendo
    
    //accedo a la memoria compartida
    
    clave = ftok(DIRECTORIO,SHM);
    if((shmid = shmget(clave,sizeof(t_rectangulo),0660))==-1){
        perror ("actualizar: error en el get a la shared memory");
        exit(1);
    }
    if((shmem = (t_rectangulo *) shmat(shmid,0,0))== (t_rectangulo *) -1){
        perror("actualizar: error en el atach a shared memory");
    }
    sprintf(mostrar,"shared memory ok \n");
    write(fileno(stdout),mostrar,strlen(mostrar));
    Semafo mutex("mutex6");
    sprintf(mostrar,"semaforo creado \n");
    write(fileno(stdout),mostrar,strlen(mostrar));
    for(int i=1;i<5;i++){
        
        mutex.sema_wait();
        sprintf(mostrar,"%d %d \n",shmem->x,shmem->y);
        write(fileno(stdout),mostrar,strlen(mostrar));
        shmem->x= (shmem->x)*10;
        shmem->y= (shmem->y)*10;
        sleep(2);
        mutex.sema_signal();
        sleep(1);
        
    }
    
    //Cerrar
    sleep(5);
    mutex.sema_close();
    

    return 0;
}

