#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FUNCIONARIOS 10
#define TAM_NOME 51
#define TAM_MATRICULA 13
#define TAM_ENDERECO 66
#define TAM_CPF 12
#define TAM_COD_BANCO 4
#define TAM_AGENCIA 6
#define TAM_CONTA 9

typedef struct {
    char nome[TAM_NOME];
    char matricula[TAM_MATRICULA];
    char endereco[TAM_ENDERECO];
    char cpf[TAM_CPF];
    char cod_banco[TAM_COD_BANCO];
    char agencia[TAM_AGENCIA];
    char conta[TAM_CONTA];
    float valor_hora;
} Funcionario;

void lerFuncionarios(Funcionario funcionarios[], const char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo %s\n", nomeArquivo);
        exit(1);
    }

    for (int i = 0; i < MAX_FUNCIONARIOS; i++) {
        fscanf(arquivo, "%50s %12s %65s %11s %3s %5s %8s %f",
               funcionarios[i].nome,
               funcionarios[i].matricula,
               funcionarios[i].endereco,
               funcionarios[i].cpf,
               funcionarios[i].cod_banco,
               funcionarios[i].agencia,
               funcionarios[i].conta,
               &funcionarios[i].valor_hora);
    }

    fclose(arquivo);
}

void processarFolhaPagamento(Funcionario funcionarios[], const char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo %s\n", nomeArquivo);
        exit(1);
    }

    char matricula[TAM_MATRICULA];
    int horasTrabalhadas;
    while (fscanf(arquivo, "%12s/%d", matricula, &horasTrabalhadas) != EOF) {
        for (int i = 0; i < MAX_FUNCIONARIOS; i++) {
            if (strcmp(funcionarios[i].matricula, matricula) == 0) {
                float salario = funcionarios[i].valor_hora * horasTrabalhadas;
                printf("%s|%s|%s|%s|%s|%.2f\n",
                       funcionarios[i].nome,
                       funcionarios[i].cpf,
                       funcionarios[i].cod_banco,
                       funcionarios[i].agencia,
                       funcionarios[i].conta,
                       salario);
                break;
            }
        }
    }

    fclose(arquivo);
}

int compararFuncionarios(const void *a, const void *b) {
    Funcionario *funcionarioA = (Funcionario *)a;
    Funcionario *funcionarioB = (Funcionario *)b;
    return strcmp(funcionarioA->nome, funcionarioB->nome);
}

int main() {
    Funcionario funcionarios[MAX_FUNCIONARIOS];
    lerFuncionarios(funcionarios, "Funcionarios.txt");

    qsort(funcionarios, MAX_FUNCIONARIOS, sizeof(Funcionario), compararFuncionarios);

    processarFolhaPagamento(funcionarios, "Novembro.txt");

    return 0;
}