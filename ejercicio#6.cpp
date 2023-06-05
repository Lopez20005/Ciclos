 /*Descripción: Escribe un programa que reciba como entrada un número entero y muestre la
secuencia de Fibonacci hasta ese número.
 Requisitos:
 - Utilizar una función para generar la secuencia de Fibonacci.
 - Utilizar ciclos para calcular los términos de la secuencia.
 - Utilizar una bifurcación para manejar el caso de un número negativo.*/

#include <iostream>

using namespace std ; 

void fibonacciSequence(int num) {
    if (num < 0) {
        cout << " El numero debe ser mayor o igual a cero." << endl;
        return;
    }

    int first = 0;
    int second = 1;

    cout << "Secuencia de Fibonacci hasta " << num << ":" << endl;
    cout << first << " ";

    if (num == 0) {
        return;
    }

    cout << second << " ";

    for (int i = 2; i <= num; i++) {
        int pos = first + second;
        cout << pos << " ";

        first = second;
        second = pos;
    }

    cout << endl;
}

int main() {
    int number;

    cout << "Ingrese un número entero: " << endl ; 
    cin >> number;
    
    system("pause");

    fibonacciSequence(number);

    return 0;
}
