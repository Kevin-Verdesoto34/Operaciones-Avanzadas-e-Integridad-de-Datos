#include <iostream>
int main() {
    int numeros[6] = {10, 20, 30, 40, 50, 60};

    // Recorremos el arreglo usando un ciclo for.
    // El límite correcto es i < 6, porque el arreglo tiene 6 elementos.
    for (int i = 0; i < 6; ++i) {
        std::cout << "Posicion " << i << ": " << numeros[i] << std::endl;
    }
    // Si el ciclo supera el tamaño del arreglo (por ejemplo i <= 6 o i < 7),
    // el programa intentaría acceder a memoria fuera del arreglo.
    // Esto puede causar un comportamiento inesperado, datos incorrectos o falla del programa.
    return 0;
}
