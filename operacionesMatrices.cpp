#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>

using namespace std;

const int n = 10;

//Definición de las funciones
void inicializarMatrices();
void imprimirMatriz(array<array <int, n>, n> Matriz);
array<array <int, n>, n> sumaMatrices (array<array <int, n>, n> A, array<array <int, n>, n> B);
array<array <int, n>, n> restaMatrices (array<array <int, n>, n> A, array<array <int, n>, n> B);
array<array <int, n>, n> multiplicacionMatrices (array<array <int, n>, n> A, array<array <int, n>, n> B);

//Definición de arrays globales
array<array <int, n>, n> A = {};
array<array <int, n>, n> B = {};

int main() {
    // Declaración de la semilla para siempre obtener números aleatorios

    srand((int)time(0));

    inicializarMatrices();
    imprimirMatriz (A);
    imprimirMatriz (B);
    sumaMatrices (A, B);
    restaMatrices(A, B);
    multiplicacionMatrices(A, B);
    return 0;
}

void inicializarMatrices(){
    for (int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            A[i][j] = (rand() % 100) + 1;
            B[i][j] = (rand() % 100) + 1;
        }
    }
}

void imprimirMatriz(array<array <int, n>, n> Matriz){
    cout << "Impresion de la matriz" << "\n";
    for (int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            cout << Matriz[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

array<array <int, n>, n> sumaMatrices (array<array <int, n>, n> A, array<array <int, n>, n> B){
    cout << "Suma de las matrices " << "\n";
    array<array <int, n>, n> C;
    for (int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            C[i][j] += A[i][j] * B[i][j];
        }
    }
    imprimirMatriz(C);
}

array<array <int, n>, n> restaMatrices (array<array <int, n>, n> A, array<array <int, n>, n> B){
    cout << "Resta de las matrices " << "\n";
    array<array <int, n>, n> C;
    for (int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            C[i][j] = A[i][j] - B[i][j];
        }
    }
    imprimirMatriz(C);
}

array<array <int, n>, n> multiplicacionMatrices (array<array <int, n>, n> A, array<array <int, n>, n> B){
    cout << "Multiplicacion de las matrices " << "\n";
    array<array <int, n>, n> C;
    for (int k=0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                C[i][j] = A[i][j] * B[j][i];
            }
        }
    }
    imprimirMatriz(C);
}