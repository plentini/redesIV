all: main robota robotb ibandeja

main.o : main.cpp xx.h
	g++ -Wall main.cpp -c -pthread -lrt
main   : main.o
	g++ -Wall main.o -o main -pthread -lrt
	
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