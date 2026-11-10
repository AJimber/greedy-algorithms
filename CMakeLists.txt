cmake_minimum_required(VERSION 3.16)

project(greedy-algorithms LANGUAGES CXX)

# Estándar de C++
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Archivos fuente
add_executable(main
    main.cpp
    funcionesMedioNivel.cpp
    problemaCambio.cpp
    problemaCambioRestringido.cpp
    problemaMochila.cpp
)

# Directorio de cabeceras
target_include_directories(main PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

# Copiar archivos de datos al directorio de compilación
configure_file(sistemamonetario.txt sistemamonetario.txt COPYONLY)
configure_file(sistemamonetariorestringido.txt sistemamonetariorestringido.txt COPYONLY)
configure_file(materialesmochila.txt materialesmochila.txt COPYONLY)

# Advertencias del compilador
target_compile_options(main PRIVATE
    -Wall
    -Wextra
    -Wpedantic
)
