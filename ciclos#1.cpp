 /*Suma de los elementos de un arreglo
 Descripción: Escribe un programa que reciba como entrada un arreglo de números enteros y
calcule la suma de todos sus elementos.
 Requisitos:
 - Utilizar un ciclo para recorrer el arreglo.
 - Utilizar una función para realizar la suma.
 - Utilizar una bifurcación para manejar el caso de un arreglo vacío.*/

#include <iostream>
#include <vector>

using namespace std;

int sumaArreglo(const vector<int>& arreglo) {


    int suma = 0;
    for (int num : arreglo) {
        suma += num;
    }
    
    return suma;
}

int main() {
  
    vector<int> numeros = {1, 2, 3, 4, 5};
    int resultado = sumaArreglo(numeros);
    cout << " Te mostrare la suma de los elementos ingresados " << endl ; 
    cout << "La suma de los elementos del arreglo es: " << resultado << endl;
    
    return 0;
}
