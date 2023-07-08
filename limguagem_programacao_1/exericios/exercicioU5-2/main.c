#include <stdio.h>
#include "vetinput.h"
#include "escalar.h"

int main() {
    char filename1[50];
    char filename2[50];

    printf("Digite o nome do primeiro arquivo: ");
    scanf("%s", filename1);

    printf("Digite o nome do segundo arquivo: ");
    scanf("%s", filename2);

    double vector1[50];
    double vector2[50];

    int size1 = readVectorFromFile(filename1, vector1);
    if (size1 == 0) {
        printf("Erro: arquivo do vetor 1 não foi encontrado\n");
        return 1;
    }

    int size2 = readVectorFromFile(filename2, vector2);
    if (size2 == 0) {
        printf("Erro: arquivo do vetor 2 não foi encontrado\n");
        return 1;
    }

    if (size1 != size2) {
        printf("Erro: os vetores possuem comprimentos distintos\n");
        return 1;
    }

    double result = recursiveDotProduct(vector1, vector2, size1);

    printf("Produto Escalar: %.3lf\n", result);

    return 0;
}
