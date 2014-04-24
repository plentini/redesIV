/* 
 * File:   ibandeja.cpp
 * Author: Pedro Lentini
 *
 * Created on April 18, 2014, 11:14 AM
 */

#include "xx.h"



/*
 * 
 */
int main(int argc, char** argv) {
    char mostrar[80];
    sprintf(mostrar,"ibandeja::\n");
    write(fileno(stdout),mostrar,strlen(mostrar));
    //mpdu m1,*rta;
    //m1.setHdr("reservar");
    p_mq cola("iband-compband");
    //cola.send(m1);
    cola.del();
    /*
    char *pname;
    int pid;
    int shmid; //file descriptor de los IPCS 
    t_rectangulo *shmem;
    key_t clave;
    clave = ftok(DIRECTORIO,SHM);// IPC_CREAT |IPC_EXCL
    //shmctl(4685847,IPC_RMID,(struct shmid_ds *) 0);
    
    //shmctl(5406764,IPC_RMID,(struct shmid_ds *) 0);
    if((shmid = shmget(clave,sizeof(t_rectangulo), IPC_CREAT |IPC_EXCL | 0660))==-1){
        
        perror("Lanzador: error al crear la shared memory");
        exit(1);
    }
    
    sprintf(mostrar,"shmid: %d\n",shmid);
    write(fileno(stdout),mostrar,strlen(mostrar));
    
    if((shmem = (t_rectangulo *) shmat(shmid,0,0))== (t_rectangulo *) -1){
        perror("Lanzador: error en el atach a shared memory");
    }
    //guardar en la shared memory
    shmem->x=100;
    shmem->y=50;
    Semafo mutex("mutex6",1);
    sprintf(mostrar," esperando... \n");
    write(fileno(stdout),mostrar,strlen(mostrar));
    sleep(5);
    for(int i=0;i<5;i++){
        mutex.sema_wait();
        shmem->x=shmem->x+1;
        shmem->y=shmem->y+1;
        sleep(1);
        sprintf(mostrar,"x: %d \t y: %d\n",shmem->x,shmem->y);
        write(fileno(stdout),mostrar,strlen(mostrar));
        mutex.sema_signal();
        sleep(4);
        
    }
    
    //Cerrar
    sleep(5);
    mutex.sema_close();
    sprintf(mostrar,"semaforo cerro \n");
    write(fileno(stdout),mostrar,strlen(mostrar));
    mutex.sema_unlink();
    sprintf(mostrar,"semaforo unlink \n");
    write(fileno(stdout),mostrar,strlen(mostrar));
    //shmctl(2162730,IPC_RMID,(struct shmid_ds *) 0);
     
    if ((shmctl (shmid, IPC_RMID, (struct shmid_ds *) 0)) == -1)
    {
        perror ("shmctl");
        exit (-1);
    } 
*/
    return 0;
}

