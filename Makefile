make.out: Pila.o MiClase.o Main.o
	g++ Pila.o MiClase.o Main.o -o make.out

Pila.o: Pila.h Pila.cpp MiClase.h
	g++ -c Pila.cpp

MiClase.o: MiClase.h MiClase.cpp
	g++ -c MiClase.cpp

Main.o: Main.cpp MiClase.h Pila.h
	g++ -c Main.cpp
