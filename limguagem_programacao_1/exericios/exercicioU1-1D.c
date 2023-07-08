// Faça uma tabela com as temperaturas em graus Célsius e Fahrenheit. Os valores em Célsius são -10, 0, 10, 20, 30, 40, 50. 
// A cada linha na tela seu programa deve imprimir a temperatura em graus Célsius, caracter de tabulação e a temperatura em Fahrenheit. 
// As temperaturas devem ser armazenadas usando o tipo float.

// Use o laço while e criar uma função para converter temperaturas de Celsius para Fahrenheit. Com protótipo antes da main e implementação após a main.

// #include<stdio.h>

// float celsius_para_fahrenheit(float celsius);

// int main(){
//     float temp_celcius[] = {-10, 0, 10, 20, 30, 40, 50};

//     int i = 0;

//     while (i < sizeof(temp_celcius) / sizeof(temp_celcius[0]))
//     {
//         float celsius = temp_celcius[i];

//         float 
//     }
    
// } corrigir esse codigo

#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    float celsius;
    
    printf("Tabela de Conversão Celsius -> Fahrenheit\n");
    printf("Celsius\t\tFahrenheit\n");
    
    celsius = -10;
    while (celsius <= 50) {
        printf("%.2f\t\t%.2f\n", celsius, celsiusToFahrenheit(celsius));
        celsius += 10;
    }
    
    return 0;
}
