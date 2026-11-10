#ifndef CAMBIO_RESTRINGIDO
#define CAMBIO_RESTRINGIDO


#include <vector>
#include "monedaRestringida.hpp"
using namespace std;

//Algoritmo voraz que aplica el metodo para resolver el problema del cambio con restricciones de las monedas.
void cambioRestringido(int cantidad, vector <MonedaRestringida> sistemaMonetarioRestringido, vector<int>& solucion);

//lectura de fichero del sistema monetario
void cargarSistemaMonetarioRestringido(vector <MonedaRestringida> &sistemaMonetarioRestringido, const char *nombreFichero);

//Escritura de la solución
void escribirSolucionRestringida(vector<int> &solucion, vector <MonedaRestringida> &sistemaMonetarioRestringido);

#endif
