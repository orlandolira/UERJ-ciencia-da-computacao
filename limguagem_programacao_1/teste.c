#include <stdio.h>
#include <stdlib.h>

int main() {
    double num1, num2, resultado;
    char operador;

    printf("Digite uma expressao no formato 'operando1 operador operando2': ");
    scanf("%lf %c %lf", &num1, &operador, &num2);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            resultado = num1 / num2;
            break;
        default:
            printf("Operador invalido.\n");
            return 0;
    }

    printf("Resultado: %.2lf\n", resultado);

    return 0;
}
