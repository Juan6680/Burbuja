#include <iostream>
#include <vector>

using namespace std;


// funcion para imprimir el arreglo 
void imprimirArreglo(const std::vector<int>& arreglo) {
    for (int num : arreglo) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

// Funcion para el ordenamiento burbuja de menor a mayor
void ordenamientoBurbuja(std::vector<int>& arreglo) {
    int n = arreglo.size();
    for (int i = 0; i < n - 1; ++i) {
        std::cout << "Paso " << i + 1 << ": ";
        bool intercambio = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arreglo[j] > arreglo[j + 1]) {
                std::swap(arreglo[j], arreglo[j + 1]);
                intercambio = true;
            }
        }
        imprimirArreglo(arreglo);
        if (!intercambio) {
            break; // Si no hubo intercambio, el arreglo ya está ordenado.
        }
    }
}

// funcion principal
int main() {

// funcion para ingresar los valores manualmente
/*int num1,num2,num3,num4,num5;

    std:: cout << "Ingrese los numeros a ordenar ejemplo 21, 40, 4, 9, 10, 35" << std::endl;
    std::cin >> num1 >> num2 >> num3 >> num4 >> num5;*/

   // Funcion para ingresar los valores de un arreglo prestablecidos

    std::vector<int> arreglo = {21, 40, 4, 9, 10, 35};
    
    // Imprimir le arreglo y aplicar el metodo de ordenamiento burbuja
    std::cout << "Arreglo original: ";
    imprimirArreglo(arreglo);

    ordenamientoBurbuja(arreglo);

    std::cout << "Arreglo ordenado: ";
    imprimirArreglo(arreglo);

    return 0;
}
