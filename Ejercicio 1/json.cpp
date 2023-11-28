//
// Created by monge on 28/11/2023.
//
#include <iostream>
#include "json.hpp" // Asegúrate de que la ruta al archivo json.hpp sea correcta

// Usar el espacio de nombres para JSON
using json = nlohmann::json;

int main() {
    // Crear un objeto JSON
    json j;
    j["nombre"] = "Ana";
    j["edad"] = 30;
    j["ciudad"] = "Madrid";

    // Convertir JSON a cadena de texto
    std::string cadena = j.dump();
    std::cout << cadena << std::endl;

    // Convertir cadena de texto a JSON
    json j2 = json::parse("{\"nombre\":\"Carlos\",\"edad\":25,\"ciudad\":\"Barcelona\"}");
    std::cout << j2 << std::endl;

    return 0;
}
