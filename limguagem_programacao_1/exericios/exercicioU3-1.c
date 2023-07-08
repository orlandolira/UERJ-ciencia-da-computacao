#include <stdio.h>

void lerSequenciaOriginal(char* sequencia) {
    printf("Digite a sequência original: ");
    scanf("%[^\n]", sequencia);
}

void converterSequencia(char* sequencia, char* sequenciaConvertida) {
    int i = 0;
    int j = 0;
    
    while (sequencia[i] != '\0') {
        switch (sequencia[i]) {
            case '\t':
                sequenciaConvertida[j++] = '\\';
                sequenciaConvertida[j++] = 't';
                break;
            case '\f':
                sequenciaConvertida[j++] = '\\';
                sequenciaConvertida[j++] = 'f';
                break;
            case '\v':
                sequenciaConvertida[j++] = '\\';
                sequenciaConvertida[j++] = 'v';
                break;
            case '\n':
                sequenciaConvertida[j++] = '\\';
                sequenciaConvertida[j++] = 'n';
                break;
            case '\r':
                sequenciaConvertida[j++] = '\\';
                sequenciaConvertida[j++] = 'r';
                break;
            default:
                sequenciaConvertida[j++] = sequencia[i];
                break;
        }
        i++;
    }
    sequenciaConvertida[j] = '\0';
}

void imprimirSequenciaFinal(char* sequenciaConvertida) {
    printf("Sequência convertida: %s\n", sequenciaConvertida);
}

int main() {
    char sequencia[100];
    char sequenciaConvertida[200];
    
    lerSequenciaOriginal(sequencia);
    converterSequencia(sequencia, sequenciaConvertida);
    imprimirSequenciaFinal(sequenciaConvertida);
    
    return 0;
}
