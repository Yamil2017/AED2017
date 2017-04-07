//============================================================================
// Name        : Hola.cpp
// Author      : Yamil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main() {

	ofstream archivo; // Genero el archivo de texto
	archivo.open("salida.txt", ios::out); // Abro el archivo
	archivo<<"!!!Hello World!!!";
	archivo.close(); // Cierro el archivo
	cout << "!!!Hello World!!!" << endl; // Imprime !!!Hello World!!!

	return 0;
}
