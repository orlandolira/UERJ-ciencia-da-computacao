#include "escalar.h"

double recursiveDotProduct(const double* vector1, const double* vector2, int size) {
    if (size == 0) {
        return 0.0; // Caso base: vetor vazio, produto escalar é zero
    }

    return vector1[0] * vector2[0] + recursiveDotProduct(vector1 + 1, vector2 + 1, size - 1);
}
