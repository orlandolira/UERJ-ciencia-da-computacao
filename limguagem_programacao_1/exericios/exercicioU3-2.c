#include <stdio.h>
#include <stdlib.h>

float calcularExpressao(char operador, float operando1, float operando2) {
    switch (operador) {
        case '+':
            return operando1 + operando2;
        case '-':
            return operando1 - operando2;
        case '*':
            return operando1 * operando2;
        case '/':
            return operando1 / operando2;
        default:
            printf("Operador inválido: %c\n", operador);
            exit(1);
    }
}

int main() {
    char expressao[20];
    printf("Digite a expressão: ");
    scanf("%s", expressao);

    char operador;
    float operando1, operando2;

    int i = 0;
    while (expressao[i] != '\0') {
        if (expressao[i] == '+' || expressao[i] == '-' || expressao[i] == '*' || expressao[i] == '/') {
            operador = expressao[i];
            expressao[i] = '\0';
            operando1 = atof(expressao);
            operando2 = atof(expressao + i + 1);
            break;
        }
        i++;
    }

    float resultado = calcularExpressao(operador, operando1, operando2);
    printf("Resultado: %.2f\n", resultado);

    return 0;
}
