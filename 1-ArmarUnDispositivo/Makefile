all: main actualizar

main.o : main.cpp xx.h Semafo.h
	g++ -Wall main.cpp -c -pthread
main   : main.o
	g++ -Wall main.o -o main -pthread
actualizar.o : actualizar.cpp xx.h Semafo.h 
	g++ -Wall actualizar.cpp -c -pthread
actualizar : actualizar.o
	g++ -Wall actualizar.o -o actualizar -pthread