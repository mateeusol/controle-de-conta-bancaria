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

// Deposita um valor na conta
void depositar(ContaBancaria *conta, float valor) {
    if (valor > 0) {
        conta->saldo += valor;
        printf("Depósito de R$ %.2f realizado com sucesso!\n", valor);
    } else {
        printf("Valor inválido para depósito.\n");
    }
}

// Realiza um saque da conta
void sacar(ContaBancaria *conta, float valor) {
    if (valor > 0 && valor <= conta->saldo) {
        conta->saldo -= valor;
        printf("Saque de R$ %.2f realizado com sucesso!\n", valor);
    } else {
        printf("Saldo insuficiente ou valor inválido.\n");
    }
}

// Transfere valor entre duas contas
void transferir(ContaBancaria *origem, ContaBancaria *destino, float valor) {
    if (valor > 0 && valor <= origem->saldo) {
        origem->saldo -= valor;
        destino->saldo += valor;
        printf("Transferência de R$ %.2f realizada com sucesso!\n", valor);
    } else {
        printf("Transferência inválida. Verifique o saldo ou o valor informado.\n");
    }
}

