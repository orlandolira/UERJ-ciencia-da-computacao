#include <stdio.h>
#include "vetinput.h"

int readVectorFromFile(const char* filename, double* vector) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        return 0; // Indica erro na abertura do arquivo
    }

    int size;
    fscanf(file, "%d", &size); // Lê o número de elementos do vetor

    for (int i = 0; i < size; i++) {
        fscanf(file, "%lf", &vector[i]); // Lê cada elemento do vetor
    }

    fclose(file);
    return size;
}
