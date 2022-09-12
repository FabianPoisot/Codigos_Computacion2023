#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Declaración de la semilla para siempre obtener números aleatorios

    srand((int)time(0));

    // Declaración de la matriz y variable suma

    array<array <int, 10>, 10> A = {};

    int traza = 0;

    for (int i=0; i < A.size(); i++){
        for(int j=0; j < A[0].size(); j++){
            A[i][j] = (rand() % 100) + 1;
            if (i == j){
                traza += A[i][j];
            }
        }

   }

   cout << "La traza es igual a " << traza;

    return 0;
}
