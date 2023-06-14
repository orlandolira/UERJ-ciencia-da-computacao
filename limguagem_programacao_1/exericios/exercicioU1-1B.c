// Exercício U1.1 -Tabela de temperatura Célsius -> Fahrenheit usando o laço for

// Faça uma tabela com as temperaturas em graus Célsius e Fahrenheit. Os valores em Célsius são -10, 0, 10, 20, 30, 40, 50. A cada linha na tela seu programa deve imprimir a temperatura em graus Célsius, caracter de tabulação e a temperatura em Fahrenheit. As temperaturas devem ser armazenadas usando o tipo float.

// Não é permitido usar estruturas de repetição, mas você deve criar uma função para converter temperaturas de Celsius para Fahrenheit. 

// #include<stdio.h>

// int main(void){
//     float celsius[] =  {-10.0, 0.0, 10.0, 20.0, 40.0, 50.0};
//     int i;

//     printf("temperadura (celsius)\t Tempetaratura (fahrenheit)\n");

//     for(i=0; i < 7 ; i++){
//         float fahrenheit = (9/5)*celsius[i]+32;
//         printf("%f\t\t\t%f\n", celsius[3], fahrenheit);
        
//     };

//     return 0;
// }
#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    printf("Celsius\t\tFahrenheit\n");
    for (float celsius = -10; celsius <= 50; celsius += 10) {
        float fahrenheit = celsiusToFahrenheit(celsius);
        printf("%.1f\t\t%.1f\n", celsius, fahrenheit);
    }
    
    return 0;
}

//corigir o  codigo de cima  entender o codigo decima.
