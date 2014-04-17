/* 
 * File:   Semafo.h
 * Author: pedro
 *
 * Created on April 5, 2014, 6:57 PM
 */

#ifndef SEMAFO_H
#define	SEMAFO_H


class Semafo {
public:
    Semafo(char *identif, int inicial);
    Semafo(char *identif);
    Semafo(const Semafo& orig);
    virtual ~Semafo();
    int sema_wait(); //ocupar el semáforo P wait
    int sema_signal(); //liberar el semáforo V signal
    int sema_close(); //terminar de usar el semáforo en un proceso
    int sema_unlink(); /* eliminar el semaforo del sistema */
private:
    sem_t *s; //semáforo creado
    char *identifi; //nombre del semáforo debe comenzar con *
    //int inicial;   // valor inicial del semaforo
    char mostrar[80]; //mensaje para mostrar en pantalla
};

Semafo::Semafo(char *identif, int inicial) {
    identifi = identif;
    s = sem_open(identif, O_CREAT | O_EXCL, 0644, inicial);
    if (s == SEM_FAILED) {
        sprintf(mostrar, "semaforo FALLO \n");
        write(fileno(stdout), mostrar, strlen(mostrar));
        perror("");
    }
}

Semafo::Semafo(char *identif) {
    identifi = identif;
    s = sem_open(identif, 0, 0644);
    if (s == SEM_FAILED) {
        sprintf(mostrar, "semaforo FALLO \n");
        write(fileno(stdout), mostrar, strlen(mostrar));
        perror("");
    }
}

Semafo::Semafo(const Semafo& orig) {
}

Semafo::~Semafo() {
}

int Semafo::sema_wait() {
    return sem_wait(s);
}

int Semafo::sema_signal() {
    return sem_post(s);
}

int Semafo::sema_close() {
    return sem_close(s);
}

int Semafo::sema_unlink() {
    return sem_unlink(identifi);
}

#endif	/* SEMAFO_H */

