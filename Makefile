Flags = -Wall -O3 -WError


todo: main.o Libreria.o
	g++ Libreria.o main.o -o Salida.exe

Libreria.o: Libreria.cpp
	g++ -c Libreria.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o Salida.exe
