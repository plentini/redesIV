//#include "includes.h"
#include "mpdu.h"
#ifndef MQ_H
#define MQ_H
class p_mq{
  string clave;
  mqd_t mq;			//mqd message queue descriptor
  public:
    p_mq(string cla="/default");
    void del();
    string getnom() {return clave;}
    mqd_t getmq()  {return mq;}
    void send(mpdu msg, unsigned prio=0);
    mpdu* receive();
    void close(){ mq_close(mq);}
    //friend ostream& operator <<(ostream& os, p_mq mq);
 };

p_mq::p_mq(string cla){
  char * nom;
  if (cla[0] != '/') cla='/'+cla;
  clave=cla;
  mq=mq_open(clave.c_str(),O_RDWR|O_CREAT,S_IREAD|S_IWRITE,NULL); //permits 0600
  if (mq==static_cast<mqd_t>(-1)){
		perror ("no se puede abrir/crear la cola");
		//cerr<<"Cola <"<<clave<<"> "<<endl;
		exit(1);}
}

void p_mq::del(){
  int retcode;
  retcode=mq_close (mq);
    if (retcode==-1){
 		perror ("No se puede cerrar la cola");
		//cerr<<"Cola<"<<clave<<"> "<<endl; 
 		exit(1);}
  retcode=mq_unlink(clave.c_str());
  if (retcode==-1){
		perror ("No se puede borrar la cola");
		//cerr<<"Cola<"<<clave<<"> "<<endl; 
		exit(1);}
}

void p_mq::send(mpdu msg,unsigned prio){
  int retcode;
  retcode=mq_send(mq,reinterpret_cast<char *>(&msg),sizeof(msg),prio);
  if (retcode==-1){
 		perror ("No se pudo enviar el mensaje");
		//cerr<<"Cola<"<<clave<<"> "<<endl; 
 		exit(1);}
}

mpdu* p_mq::receive(){
  struct mq_attr attr;
  mq_getattr(mq, &attr);
  char * buff;
  int long_buf=attr.mq_msgsize+1;
  buff=(char *) malloc(long_buf);
  uint prio=0;
  int msize=0;
  msize=mq_receive(mq,buff,long_buf,&prio);
  if (msize==-1){
 		perror ("No se pudo recibir un mensaje.");
		//cerr<<"Cola<"<<clave<<"> "<<endl; 
 		exit(1);}
  return reinterpret_cast <mpdu*> (buff);
}
//hasta aca llegué
/*
ostream& operator <<(ostream& os, p_mq m){
  
  // imprime el estado de una cola de mensajes
// 	struct mq_attr {
//     long mq_flags;       // Flags: 0 or O_NONBLOCK 
//     long mq_maxmsg;      // Max. # of messages on queue 
//     long mq_msgsize;     // Max. message size (bytes) 
//     long mq_curmsgs;     // # of messages currently in queue 
// 	};
	struct mq_attr attr;
	if (mq_getattr(m.getmq(), &attr)==-1){
		perror (" No puede inspeccionar la cola de mensajes"); exit(1);};
	return os<<"Cola"<< m.getnom()<<"[ mq_flags="<<attr.mq_flags<<" mq_maxmsg="<<attr.mq_maxmsg<<
		  " mq_msgsize="<<attr.mq_msgsize<<
		  " mq_curmsgs="<<attr.mq_curmsgs<<"]";
}
*/
#endif
