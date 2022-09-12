#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Declaración de la semilla para siempre obtener números aleatorios

    srand((int)time(0));

    // Declaración de los arreglos

    array < int, 1000> A = {};
    array < int, 1000> B = {};
    array < int, 1000> C = {};


    for (int i: A){
        //Generación de números aleatorios
        A[i] = (rand() % 100) + 1;
        B[i] = (rand() % 100) + 1;
        C[i] = A[i] + B[i];

        // Impresión de los números
        cout << " " << C[i] << "\n";
    }


     /*
     También funciona con el límite adecuado.
     for (int i=0; i < 1000; i++){
        A[i] = (rand() % 100) + 1;
        B[i] = (rand() % 100) + 1;

        C[i] = A[i] + B[i];

        cout << i << " " << C[i] << "\n";
    }
     */

    return 0;
}
