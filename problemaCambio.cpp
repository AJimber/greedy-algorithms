
#include <fstream>
#include <iostream>
#include <vector>
#include "problemaCambio.hpp"


//Algoritmo voraz que aplica el metodo para resolver el problema del cambio.
void cambio(int cantidad, std::vector<Moneda> sistemaMonetario, std::vector<int>& solucion)
{
	// Implementación básica
	size_t i = 0;
	while(i < sistemaMonetario.size())
	{
		int moneda = sistemaMonetario[i].getValor();
		int contador = 0;

		while(moneda <= cantidad)
		{
			contador++;
			cantidad = cantidad - moneda;
		}

		solucion.push_back(contador);
		i++;
	}
}

/*
void cambio(int cantidad, std::vector<Moneda> sistemaMonetario, std::vector<int>& solucion)
{
	// Implementación con resto y divisiones
	for(size_t i = 0; cantidad > 0; i++)
	{
		
	}
	
	
	for(size_t i = 0; cantidad > 0; i++)
	{
		if(cantidad > sistemaMonetario[i].getValor())
		{
			if(cantidad % sistemaMonetario[i].getValor() == 0)
			{
				while(cantidad > 0)
				{
					cantidad -= sistemaMonetario[i].getValor();
					solucion.push_back(sistemaMonetario[i].getValor());
				}
			}
			else
			{
				while(cantidad - sistemaMonetario[i].getValor() > 0)
				{
					cantidad -= sistemaMonetario[i].getValor();
					solucion.push_back(sistemaMonetario[i].getValor());
				}
			}
		}
	}	
}*/


void cargarSistemaMonetario(std::vector<Moneda> &sistemaMonetario, const char *nombreFichero)
{
	std::ifstream fichero(nombreFichero);
	if(!fichero.is_open())
	{
		std::cerr << "Error al abrir el fichero" << std::endl;
		return;
	}

	Moneda moneda;
	int valor;

	while(fichero >> valor)
	{
		moneda.setValor(valor);
		sistemaMonetario.push_back(moneda);
	}

	fichero.close();
}

void escribirSolucion(std::vector<int> &solucion, std::vector<Moneda> &sistemaMonetario)
{
	double suma = 0;
	for(unsigned int i=0; i<sistemaMonetario.size(); i++)
	{
		std::cout << solucion[i] << " unidades de " << sistemaMonetario[i].getValor() << std::endl;
		suma += solucion[i] * sistemaMonetario[i].getValor();
	}
	std::cout << "Total: " << suma/100 << " euros" << std::endl;

}
 
		

