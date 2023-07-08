// Exercício U1.1 -Tabela de temperatura Célsius -> Fahrenheit

// Faça uma tabela com as temperaturas em graus Célsius e Fahrenheit. 
// Os valores em Célsius são -10, 0, 10, 20, 30, 40, 50.
// A cada linha na tela seu programa deve imprimir a temperatura em graus Célsius,
//  caracter de tabulação e a temperatura em Fahrenheit. As temperaturas deve ser armazenadas usando o tipo float.

// Não é permitido usar estruturas de repetição, nem funções.

#include<stdio.h>

int main(void){
    float celsius1 = -10.0;
    float celsius2 = 0.0;
    float celsius3 = 10.0;
    float celsius4 = 20.0;
    float celsius5 = 30.0;
    float celsius6 = 40.0;
    float celsius7 = 50.0;

    float fahrenheit1 = (celsius1 * 9 / 5) + 32;
    float fahrenheit2 = (celsius2 * 9 / 5) + 32;
    float fahrenheit3 = (celsius3 * 9 / 5) + 32;
    float fahrenheit4 = (celsius4 * 9 / 5) + 32;
    float fahrenheit5 = (celsius5 * 9 / 5) + 32;
    float fahrenheit6 = (celsius6 * 9 / 5) + 32;
    float fahrenheit7 = (celsius7 * 9 / 5) + 32;

    printf("celsius\t\tfahrenheit\n");
    printf("%.1f\t\t%.1f\n", celsius1,fahrenheit1);
    printf("%.1f\t\t%.1f\n", celsius2,fahrenheit2);
    printf("%.1f\t\t%.1f\n", celsius3,fahrenheit3);
    printf("%.1f\t\t%.1f\n", celsius4,fahrenheit4);
    printf("%.1f\t\t%.1f\n", celsius5,fahrenheit5);
    printf("%.1f\t\t%.1f\n", celsius6,fahrenheit6);
    printf("%.1f\t\t%.1f\n", celsius7,fahrenheit7);

    return  0;

}

