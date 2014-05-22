/* 
 * File:   Robot.h
 * Author: Pedro Lentini
 *
 * Created on April 10, 2014, 11:00 PM
 */

#ifndef ROBOT_H
#define	ROBOT_H

class Robot {
public:
    Robot(CajonPilas cajon,int inicial);
    
private:


};

Robot::Robot(CajonPilas cajon,int inicial) {
    int parametro; //parámetro a pasar al proceso hijo
    unsigned childpid1;
    unsigned childpid2; 
    unsigned childpid3; 
    unsigned childpid4; //pid del hijo
    char mostrar[80];
    char *pname;   //nombre del programa
    static char el_parametro[14]; //parámetro string para el proceso hijo
    //pname = argv[0]; //obtiene el nombre del programa en ejecución
    
    /* 
     Instrucciones con todas las inicializaciones y creación de los IPC*/
    
    /*se muestra un mensaje en la pantalla indicando el contenido del
     parámetro que se pasa al programa invocado con la exec en el hijo*/
    
    /* convertir el parametro de integer a string */
    sprintf(el_parametro,"%d\n",parametro);
    
    /* Si entre el fork y la exec no se usa ninguna variable del proceso
     padre, Linux usa COW*/
    
    if ((childpid1 = fork())<0){/*Se crea el proceso hijo */
        perror("Error en el fork");
        exit(1);
    }
    
    if((childpid1 == 0)) {
        /* PROCESO HIJO (child)*/
        
        execlp("./robota","robota",el_parametro,(char *)0);
        /* si sigue es que no se ejecuto correctamente el comando exclp*/
        exit(3);
    }
    if ((childpid2 = fork())<0){/*Se crea el proceso hijo */
        perror("Error en el fork");
        exit(1);
    }
    
    if((childpid2 == 0)) {
        /* PROCESO HIJO (child)*/
        
        execlp("./robotb","robotb",el_parametro,(char *)0);
        /* si sigue es que no se ejecuto correctamente el comando exclp*/
        exit(3);
    }
    
    if(inicial== 1){
        if ((childpid3 = fork())<0){/*Se crea el proceso hijo */
            perror("Error en el fork");
            exit(1);
        }
        if((childpid3 == 0)) {
        /* PROCESO HIJO (child)*/
            execlp("./ibandeja","ibandeja",el_parametro,(char *)0);
            /* si sigue es que no se ejecuto correctamente el comando exclp*/
            exit(3);
        }
        
        if ((childpid4 = fork())<0){/*Se crea el proceso hijo */
            perror("Error en el fork");
            exit(1);
        }
        if((childpid4 == 0)) {
        /* PROCESO HIJO (child)*/
            execlp("./componentebandeja","componentebandeja",el_parametro,(char *)0);
            /* si sigue es que no se ejecuto correctamente el comando exclp*/
            exit(3);
        }
        
    }
    
    //sprintf(mostrar,"proceso padre");
    //write(fileno(stdout),mostrar,strlen(mostrar));
    
}

#endif	/* ROBOT_H */

