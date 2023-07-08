#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char nomeArquivo[100];
    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    FILE *arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro no arquivo %s\n", nomeArquivo);
        return 1;
    }

    int numCaracteresImprimiveis = 0;
    int numLinhas = 0;
    int numCaracteresTotal = 0;
    int caractere;

    while ((caractere = fgetc(arquivo)) != EOF) {
        if (isprint(caractere)) {
            numCaracteresImprimiveis++;
        }
        if (caractere == '\n') {
            numLinhas++;
        }
        numCaracteresTotal++;
    }

    printf("Número de caracteres lidos: %d\n", numCaracteresTotal);
    printf("Número de caracteres imprimíveis lidos: %d\n", numCaracteresImprimiveis);
    printf("Número de linhas: %d\n", numLinhas);

    fclose(arquivo);
    return 0;
}
