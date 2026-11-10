#include "funcionesMedioNivel.hpp"
#include <iostream>

int main()
{
    int opcion;

    do
    {
        std::cout << "\n========== greedy-algorithms ==========\n";
        std::cout << "1. Problema cambio\n";
        std::cout << "2. Problema cambio restringido\n";
        std::cout << "3. Mochila\n";
        std::cout << "0. Salir\n";
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;

        switch(opcion)
        {
            case 1:
                problemaCambio();
                break;

            case 2:
                problemaCambioRestringido();
                break;

            case 3:
                problemaMochila();
                break;

            case 0:
                std::cout << "Fin del programa." << std::endl;
                break;

            default:
                std::cout << "Opcion incorrecta." << std::endl;
                break;
        }
    } while(opcion != 0);

    return 0;
}