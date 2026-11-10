# Greedy Algorithms

Implementación de Algorítmos voraces desarrollados en C++.

## Descripción

Este proyecto aplica algoritmos voraces a tres problemas: el cambio de monedas sin restricciones, el cambio con un número limitado de monedas y la mochila fraccionaria.

El programa utiliza un único ejecutable con un menú de tres opciones. Los datos de monedas y materiales se cargan automáticamente desde archivos de texto; el usuario solo introduce el importe o el volumen de la mochila.

## Funcionamiento

### 1. Cambio sin restricciones

El usuario introduce una cantidad en euros. El programa la transforma a céntimos y recorre las denominaciones del sistema monetario europeo de mayor a menor. Para cada moneda o billete, calcula cuántas unidades se necesitan y muestra el cambio obtenido.

Las denominaciones se leen de `sistemamonetario.txt` y se supone que hay unidades ilimitadas de cada una.

### 2. Cambio con restricciones

El programa sigue el mismo criterio voraz, pero respeta la cantidad disponible de cada moneda o billete. Estos límites se leen de `sistemamonetariorestringido.txt`.

La salida muestra las unidades utilizadas y el límite de cada denominación.

Para sistemas monetarios o inventarios arbitrarios, una elección voraz no garantiza siempre la solución con el menor número de monedas.

### 3. Mochila fraccionaria

El usuario introduce el volumen de la mochila. Los materiales se leen de `materialesmochila.txt`; cada registro contiene una etiqueta, el volumen disponible y el precio por unidad de volumen.

El programa ordena los materiales por precio de mayor a menor, utiliza todo el volumen posible de cada uno y, si es necesario, toma solo una parte del último material. Muestra el volumen usado de cada material y el coste final.

## Requisitos

- CMake 3.16 o posterior.
- Un compilador compatible con C++11, como GCC o Clang.

## Compilación y ejecución

Desde la raíz del proyecto:

```bash
cmake -S . -B build
cmake --build build
cd build
./main
```

CMake copia los tres archivos de datos al directorio `build`. También se puede compilar directamente en la raíz con `cmake .`, `make` y `./main`.

## Estructura del proyecto

```text
greedy-algorithms/
├── CMakeLists.txt
├── main.cpp
├── funcionesMedioNivel.cpp
├── funcionesMedioNivel.hpp
├── problemaCambio.cpp
├── problemaCambio.hpp
├── problemaCambioRestringido.cpp
├── problemaCambioRestringido.hpp
├── problemaMochila.cpp
├── problemaMochila.hpp
├── moneda.hpp
├── monedaRestringida.hpp
├── material.hpp
├── materialUsado.hpp
├── sistemamonetario.txt
├── sistemamonetariorestringido.txt
├── sistemamonetarioresrestringido.txt
├── materialesmochila.txt
└── README.md
```

`sistemamonetarioresrestringido.txt` es una copia con la grafía utilizada en las instrucciones de entrega; el programa lee `sistemamonetariorestringido.txt`.

## Casos de prueba

Con los materiales suministrados, los resultados de la mochila son:

| Volumen solicitado | Coste final |
| ---: | ---: |
| 30 | 1275 |
| 90 | 3625 |
| 100 | 3925 |
| 135 | 4850 |
| 160 | 5150 |
| 200 | 5150 |

El volumen total disponible es 155; por eso los casos de 160 y 200 tienen el mismo coste.

## Tecnologías utilizadas

- **C++11:** implementación de los algoritmos y del menú.
- **CMake:** configuración y compilación de un único ejecutable.
