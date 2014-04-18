all: main robota robotb ibandeja

main.o : main.cpp xx.h
	g++ -Wall main.cpp -c -pthread
main   : main.o
	g++ -Wall main.o -o main -pthread
	
robota.o : robota.cpp xx.h Semafo.h 
	g++ -Wall robota.cpp -c -pthread
robota : robota.o
	g++ -Wall robota.o -o robota -pthread

robotb.o : robotb.cpp xx.h Semafo.h 
	g++ -Wall robotb.cpp -c -pthread
robotb : robotb.o
	g++ -Wall robotb.o -o robotb -pthread