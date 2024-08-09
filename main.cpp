#include <iostream>
#include "Libreria.h"


int main(){
	int numAlfa=5, EXP=0, AR=0;
	std::cout << "Hola Mundo!" << std::endl;
	
	EXP=exponente(numAlfa);
	AR=area(numAlfa, numAlfa);

	std::cout << "Numeros de prueba: " << "Area: " << AR << " Exponente: " << EXP << std::endl;

	return 0;
}
