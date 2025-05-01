// contas.c
#include <stdio.h>
#include <string.h>
#include "contas.h"

// Cria uma conta bancária preenchendo os dados
void criarConta(ContaBancaria *conta) {
    printf("Nome do titular: ");
    scanf(" %[^\n]", conta->nomeTitular);

    printf("Número da conta: ");
    scanf("%d", &conta->numeroConta);

    printf("Saldo inicial: ");
    scanf("%f", &conta->saldo);

    printf("Tipo da conta (Corrente/Poupança): ");
    scanf(" %[^\n]", conta->tipoConta);
}

// Mostra os dados da conta
void verSaldo(ContaBancaria conta) {
    printf("\nConta: %d\nTitular: %s\nSaldo: R$ %.2f\nTipo: %s\n\n",
        conta.numeroConta, conta.nomeTitular, conta.saldo, conta.tipoConta);
}
