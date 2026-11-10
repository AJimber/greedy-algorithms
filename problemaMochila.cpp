#include <fstream>
#include <vector>
#include <iostream>
#include "problemaMochila.hpp"
#include "material.hpp"
#include "materialUsado.hpp"

using namespace std;

//Algoritmo voraz que aplica el metodo para resolver el problema de la mochila.
void mochila(float volumenMochila, vector<Material> &materiales, vector<MaterialUsado> &solucion)
{
    size_t i = 0;
    MaterialUsado aux;

    ordenarMateriales(materiales);

    while(volumenMochila > 0 && i < materiales.size())
    {
        aux.setMaterial(materiales[i]);

        if(volumenMochila >= materiales[i].getVolumen())
        {
            aux.setVolumenUsado(materiales[i].getVolumen());
            volumenMochila -= materiales[i].getVolumen();
        }
        else
        {
            aux.setVolumenUsado(volumenMochila);
            volumenMochila = 0;
        }

        solucion.push_back(aux);
        i++;
    }
}

void cargarMateriales(vector<Material> &materiales, const char *nombreFichero)
{
	ifstream fichero(nombreFichero);
	int etiqueta;
    float volumen, precio;
	
	while(fichero >> etiqueta >> volumen >> precio)
	{
		Material m(etiqueta, volumen, precio);
		materiales.push_back(m);
	}
}

void ordenarMateriales(vector<Material> &materiales)
{
    Material aux;
    size_t posMax;

    for(size_t i = 0; i < materiales.size() -1; i++)
    {
        posMax = i;
        for(size_t j = i+1; j < materiales.size(); j++)
        {
            if (materiales[j].getPrecio() > materiales[posMax].getPrecio())
                posMax = j;
        }
        aux = materiales[posMax];
        materiales[posMax] = materiales[i];
        materiales[i] = aux;
    }
}


void escribirSolucion(vector<MaterialUsado> &solucion)
{
    float costeMochila = 0.0;
	for(unsigned int i=0; i < solucion.size(); i++)
	{
		cout << solucion[i].getVolumenUsado() << " unidades de material " << solucion[i].getMaterial().getEtiqueta() << " de precio " 
        << solucion[i].getMaterial().getPrecio() << " y de volumen " << solucion[i].getMaterial().getVolumen() << endl;
        costeMochila += solucion[i].getVolumenUsado() * solucion[i].getMaterial().getPrecio();
	}
    cout << "Coste Final de la Mochila: " << costeMochila << endl;
}
