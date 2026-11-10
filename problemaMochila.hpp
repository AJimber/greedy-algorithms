#ifndef MOCHILA
#define MOCHILA


#include <vector>
#include "material.hpp"
#include "materialUsado.hpp"

using namespace std;

void mochila(float volumenMochila, vector<Material> &materiales, vector<MaterialUsado> &solucion);
void ordenarMateriales(vector<Material> &materiales);
void cargarMateriales(vector<Material> &materiales, const char *nombreFichero);
void escribirSolucion(vector<MaterialUsado> &solucion);

#endif

