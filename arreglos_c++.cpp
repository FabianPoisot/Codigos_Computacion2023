#include <iostream>

using namespace std;

#define N 10

int main() {

    // definición de un arreglo
    int array[10]{0};

    //Iterar el arreglo
    for(int i=0; i < N; i++){
        array[i] = i + i;
        cout << array[i] << "\t";
    }


    return 0;
}
