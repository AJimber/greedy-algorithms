#ifndef CAMBIO
#define CAMBIO


#include <vector>
#include <algorithm>
#include "moneda.hpp"


//Algoritmo voraz que aplica el metodo para resolver el problema del cambio.
void cambio(int cantidad, std::vector <Moneda> sistemaMonetario, std::vector<int>& solucion);

//lectura de fichero del sistema monetario
void cargarSistemaMonetario(std::vector <Moneda> &sistemaMonetario, const char *nombreFichero);

//Escritura de la solución
void escribirSolucion(std::vector<int> &solucion, std::vector <Moneda> &sistemaMonetario);

#endif
