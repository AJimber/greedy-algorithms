#include "funcionesMedioNivel.hpp"
#include "problemaCambio.hpp"
#include "problemaCambioRestringido.hpp"
#include "problemaMochila.hpp"
#include <vector>
#include "moneda.hpp"
#include "material.hpp"
#include "materialUsado.hpp"
#include <iostream>
#include <cmath>

void problemaCambio()
{
    std::vector<Moneda> sistemaMonetario;
    std::vector<int> solucion;
    float cantidad;
    int valor;

    std::cout << "Introduce la cantidad: ";
    std::cin >> cantidad;
    std::cout << std::endl;
    
    while(cantidad <= 0)
    {
        std::cout << "La cantidad debe ser mayor que 0\nIntroduce la cantidad: ";
        std::cin >> cantidad;
        std::cout << std::endl;
    }

    valor = cantidad * 100;

    cargarSistemaMonetario(sistemaMonetario, "sistemamonetario.txt");
    cambio(valor, sistemaMonetario, solucion);
    escribirSolucion(solucion, sistemaMonetario);
}


void problemaCambioRestringido()
{
    std::vector<MonedaRestringida> sistemaMonetarioRestringido;
    std::vector<int> solucion;
    float cantidad;
    int valor;

    std::cout << "Introduce la cantidad: ";
    std::cin >> cantidad;
    std::cout << std::endl;
    
    while(cantidad <= 0)
    {
        std::cout << "La cantidad debe ser mayor que 0\nIntroduce la cantidad: ";
        std::cin >> cantidad;
        std::cout << std::endl;
    }

    valor = cantidad * 100;

    cargarSistemaMonetarioRestringido(sistemaMonetarioRestringido, "sistemamonetariorestringido.txt");
    cambioRestringido(valor, sistemaMonetarioRestringido, solucion);
    escribirSolucionRestringida(solucion, sistemaMonetarioRestringido);
}



void problemaMochila()
{
    std::vector<Material> materiales;
    std::vector<MaterialUsado> solucion;
    float volumenMochila;

    std::cout << "Introduce el volumen: ";
    std::cin >> volumenMochila;
    std::cout << std::endl;

    while(volumenMochila <= 0)
    {
        std::cout << "El volumen debe ser mayor que 0\nIntroduce el volumen: ";
        std::cin >> volumenMochila;
        std::cout << std::endl;
    }

    cargarMateriales(materiales, "materialesmochila.txt");
    mochila(volumenMochila, materiales, solucion);
    escribirSolucion(solucion);
}



