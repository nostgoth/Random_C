

#include <stdio.h>

#include <stdlib.h>

#include <time.h>


int main() {

    // Inicialitzar el generador de números aleatoris

    srand(time(NULL));


    // Generar un número aleatori entre 0 i 99

    int numeroAleatori = rand() % 100;


    // Mostrar el número generat

    printf("Número aleatori generat: %d\n", numeroAleatori);


    return 0;

}
