
#include <fstream>
#include <iostream>
#include <vector>
#include "problemaCambioRestringido.hpp"
#include "monedaRestringida.hpp"

using namespace std;



//Algoritmo voraz que aplica el metodo para resolver el problema del cambio con restriiciones de las monedas.
void cambioRestringido(int cantidad, vector<MonedaRestringida> sistemaMonetarioRestringido, vector<int>& solucion)
{
	size_t i = 0;
	MonedaRestringida aux;
	while(i < sistemaMonetarioRestringido.size())
	{
		int moneda = sistemaMonetarioRestringido[i].getValor();
		int cantidadMoneda = sistemaMonetarioRestringido[i].getCantidad();
		int contador = 0;

		while(moneda <= cantidad && cantidadMoneda > 0)
		{
			contador++;
			cantidad = cantidad - moneda;
			cantidadMoneda -= 1;
		}

		solucion.push_back(contador);
		i++;
	}
}

void cargarSistemaMonetarioRestringido(vector<MonedaRestringida> &sistemaMonetarioRestringido, const char *nombreFichero)
{
	std::ifstream fichero(nombreFichero);
	if(!fichero.is_open())
	{
		std::cerr << "Error al abrir el fichero" << std::endl;
		return;
	}

	MonedaRestringida moneda;
	int valor, cantidad;

	while(fichero >> valor >> cantidad)
	{
		moneda.setValor(valor);
		moneda.setCantidad(cantidad);
		sistemaMonetarioRestringido.push_back(moneda);
	}

	fichero.close();
}

void escribirSolucionRestringida(vector<int> &solucion, vector<MonedaRestringida> &sistemaMonetarioRestringido)
{
	double suma = 0;
	for(unsigned int i=0; i<sistemaMonetarioRestringido.size(); i++)
	{
		cout << solucion[i] << " unidades de " << sistemaMonetarioRestringido[i].getValor() << " cuyo límite era " << sistemaMonetarioRestringido[i].getCantidad() << endl;
		suma += solucion[i] * sistemaMonetarioRestringido[i].getValor();
	}
	cout << "Total: " << suma/100 << " euros" << endl;
}
 
		

