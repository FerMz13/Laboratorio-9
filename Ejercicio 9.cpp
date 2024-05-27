#include <stdio.h>


int EncontrarI(int arr[], int inicio, int fin) {
    if (inicio > fin) {
        return -1; 
    }
    int medio = (inicio + fin) / 2;
    if (arr[medio] == medio) {
        return medio; 
    } else if (arr[medio] > medio) {
        return EncontrarI(arr, inicio, medio - 1); 
    } else {
        return EncontrarI(arr, medio + 1, fin);
    }
}
int main() {
    int arr[] = {3, 0, 1, 2, 4, 6};
    int tamano = sizeof(arr) / sizeof(arr[0]);
    int resultado = EncontrarI(arr, 0, tamano - 1);
    if (resultado != -1) {
        printf("Indice magico encontrado en: %d\n", resultado);
    } else {
        printf("No se encontro indice magico\n");
    }
    return 0;
}

