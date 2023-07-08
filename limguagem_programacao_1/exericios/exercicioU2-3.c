#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* octalToBinary(char* octal) {
    int octalLength = strlen(octal);
    char* binary = malloc((3 * octalLength + 1) * sizeof(char));
    int binaryIndex = 0;
    
    for (int i = 0; i < octalLength; i++) {
        int octalDigit = octal[i] - '0';
        for (int j = 2; j >= 0; j--) {
            binary[binaryIndex++] = ((octalDigit >> j) & 1) + '0';
        }
    }
    binary[binaryIndex] = '\0';
    
    return binary;
}

char* binaryToHexadecimal(char* binary) {
    int binaryLength = strlen(binary);
    int padding = binaryLength % 4;
    int hexLength = (binaryLength + padding) / 4;
    char* hexadecimal = malloc((hexLength + 1) * sizeof(char));
    int hexadecimalIndex = 0;
    
    // Adicionar zeros à esquerda se necessário
    for (int i = 0; i < padding; i++) {
        binary[binaryLength + i] = '0';
    }
    binary[binaryLength + padding] = '\0';
    
    for (int i = 0; i < binaryLength; i += 4) {
        int decimal = 0;
        for (int j = 0; j < 4; j++) {
            decimal = (decimal << 1) + (binary[i + j] - '0');
        }
        if (decimal < 10) {
            hexadecimal[hexadecimalIndex++] = decimal + '0';
        } else {
            hexadecimal[hexadecimalIndex++] = decimal - 10 + 'A';
        }
    }
    hexadecimal[hexadecimalIndex] = '\0';
    
    return hexadecimal;
}

int main() {
    char octal[100];
    printf("Digite um número octal: ");
    fgets(octal, sizeof(octal), stdin);
    
    octal[strcspn(octal, "\n")] = '\0';
    
    char* binary = octalToBinary(octal);
    char* hexadecimal = binaryToHexadecimal(binary);
    
    printf("Binário: %s\n", binary);
    printf("Hexadecimal: %s\n", hexadecimal);
    
    free(binary);
    free(hexadecimal);
    
    return 0;
}
