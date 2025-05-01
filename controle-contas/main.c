// main.c
#include <stdio.h>
#include "contas.h"

int main() {
    ContaBancaria conta1, conta2;
    int opcao;
    float valor;

    // Criar duas contas no início (poderia ser via menu também)
    printf("Cadastro da Conta 1:\n");
    criarConta(&conta1);
    printf("\nCadastro da Conta 2:\n");
    criarConta(&conta2);

    do {
        printf("\n=== Menu Bancário ===\n");
        printf("1. Ver Saldo (Conta 1)\n");
        printf("2. Depositar (Conta 1)\n");
        printf("3. Sacar (Conta 1)\n");
        printf("4. Transferir da Conta 1 para Conta 2\n");
        printf("5. Ver Saldo (Conta 2)\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                verSaldo(conta1);
                break;
            case 2:
                printf("Valor para depósito: ");
                scanf("%f", &valor);
                depositar(&conta1, valor);
                break;
            case 3:
                printf("Valor para saque: ");
                scanf("%f", &valor);
                sacar(&conta1, valor);
                break;
            case 4:
                printf("Valor para transferência: ");
                scanf("%f", &valor);
                transferir(&conta1, &conta2, valor);
                break;
            case 5:
                verSaldo(conta2);
                break;
            case 0:
                printf("Encerrando...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }

    } while(opcao != 0);

    return 0;
}

