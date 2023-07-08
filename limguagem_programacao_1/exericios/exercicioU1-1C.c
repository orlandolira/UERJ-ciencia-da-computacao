// Exercício U1.1B -Tabela de temperatura Célsius -> Fahrenheit usando o laço for

// Faça uma tabela com as temperaturas em graus Célsius e Fahrenheit. Os valores inicial,
//  final e o incremento das temperaturas em Célsius são informados pelo teclado.
// A cada linha na tela seu programa deve imprimir a temperatura em graus Célsius, 
//caracter de tabulação e a temperatura em Fahrenheit. 
// As temperaturas devem ser armazenadas usando o tipo float.

// Use o laço for e crie uma função para converter temperaturas de Celsius para Fahrenheit

#include<stdio.h>

int main (void){

    int fahr;

    for(fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6f\n",fahr,(5.0/9.0)*(fahr - 32));
    
}