#include <iostream>
#include "Libreria.h"

int exponente(int numA){
	return numA*numA;
}

int area(int largo, int ancho){
	int area=0;
	if(largo>0 && ancho>0){
		area=largo*ancho;
	}
	return area;
}


