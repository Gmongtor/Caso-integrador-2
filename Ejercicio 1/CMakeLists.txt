cmake_minimum_required(VERSION 3.26)
project(Ejercicio_1)

set(CMAKE_CXX_STANDARD 17)

add_executable(Ejercicio_1 main.cpp json.cpp json.hpp)
# Incluir el módulo FetchContent
include(FetchContent)

# Declarar nlohmann_json
FetchContent_Declare(
        json
        GIT_REPOSITORY https://github.com/nlohmann/json.git
        GIT_TAG v3.10.5  # Puedes especificar una versión concreta
)

# Hacer que json esté disponible
FetchContent_MakeAvailable(json)

# Crear tu ejecutable
add_executable(tu_ejecutable main.cpp)

# Vincular tu ejecutable con la biblioteca json
target_link_libraries(tu_ejecutable PRIVATE nlohmann_json::nlohmann_json)