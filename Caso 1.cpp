// Caso 1

using namespace std;

#include <iostream>

#define cBlue 1
#define cRed 2
#define cYellow 3
#define cGreen 4


// Struct para los sectores del mapa
struct sector{
    int id;
    int color;
    int adya[5]; // Se inicializa con el largo de la lista mas grande
};

int main () 
{   
    // Definicion del mapa como una lista de sectores
    sector regiones[] = {
        {0,  0, {0}}, // Sector nulo para evitar fallos con los largos de las listas
	    {1,  0, {2, 3, 4}},
        {2,  0, {1, 3, 6, 7, 8}},
        {3,  0, {1, 2, 4, 5, 6}},
        {4,  0, {1, 3, 5, 10}},
        {5,  0, {3, 4, 6, 10}},
        {6,  0, {2, 3, 5, 7, 9}},
        {7,  0, {2, 6, 8, 9}},
        {8,  0, {2, 7, 9}},
        {9,  0, {6, 7, 8}},
        {10, 0, {4, 5, 6}},
    };

    bool validez = true;
    bool blue, red, yellow, green;

    // Iteracion por cada sector del mapa
    for (int i=1; i<11; i++) { 

        // 1 Blue, 2 Red, 3 Yellow, 4 Green
        // Variables para los colores disponibles
        blue = true;
        red = true;
        yellow = true;
        green = true;
        
        // Iteracion por los adyacentes en busqueda de colores ocupados
        for (const auto &item : regiones[i].adya) { 
            if (regiones[item].color == cBlue) {
                blue = false;
            } else if (regiones[item].color == cRed) {
                red = false;
            } else if (regiones[item].color == cYellow) {
                yellow = false;
            } else if (regiones[item].color == cGreen) {
                green = false; 
            }    
        }; 

        // Asignacion de color según los disponibles
        if (blue) {  
            regiones[i].color = cBlue;
        } else if (red) {
            regiones[i].color = cRed;
        } else if (yellow) {
            regiones[i].color = cYellow;
        } else if (green) {
            regiones[i].color = cGreen;
        } else { // Si no quedan colores
            validez = false;
            break;
        };

    // Mensaje que indica si se cumple el teorema
    };
    if (validez) {
        cout << "Si es posible\n";
    } else {
        cout << "No es posible\n";
    };

    return 0;
}
