all: lanzador robota robotb ibandeja componentebandeja

lanzador.o : lanzador.cpp xx.h
	g++ -Wall lanzador.cpp -c -pthread -lrt
lanzador   : lanzador.o
	g++ -Wall lanzador.o -o lanzador -pthread -lrt
	
robota.o : robota.cpp xx.h Semafo.h 
	g++ -Wall robota.cpp -c -pthread -lrt
robota : robota.o
	g++ -Wall robota.o -o robota -pthread -lrt

robotb.o : robotb.cpp xx.h Semafo.h 
	g++ -Wall robotb.cpp -c -pthread -lrt
robotb : robotb.o
	g++ -Wall robotb.o -o robotb -pthread -lrt
	
ibandeja.o : ibandeja.cpp xx.h Semafo.h 
	g++ -Wall ibandeja.cpp -c -pthread -lrt
ibandeja : ibandeja.o
	g++ -Wall ibandeja.o -o ibandeja -pthread -lrt
	
componentebandeja.o : componentebandeja.cpp xx.h Semafo.h 
	g++ -Wall componentebandeja.cpp -c -pthread -lrt
componentebandeja : componentebandeja.o
	g++ -Wall componentebandeja.o -o componentebandeja -pthread -lrt