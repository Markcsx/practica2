/*
 * main.cpp
 *
 */

//
// Programa principal

// C++ headers
#include <iostream>
#include <fstream>
#include <cstdlib> // EXIT_SUCCESS
using namespace std;

// Llista de includes a afegir
#include "repte020a.h"

int
main(int argc, char const *argv[])
{
	ofstream fitxer;

	fitxer.open("repte020a.txt");
	Repte020a(cout);
	Repte020a(fitxer);
	fitxer.close();

	return EXIT_SUCCESS;
}
