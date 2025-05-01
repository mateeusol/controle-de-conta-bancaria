// main.c
#include <stdio.h>
// Importa a struct e as funções do projeto
#include "contas.h"

int main() {
    ContaBancaria conta;
    // armazenar a escolha do menu
    int opcao;

    do {
        printf("=== Menu Bancário ===\n");
        printf("1. Criar Conta\n");
        printf("2. Ver Saldo\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                criarConta(&conta);
                break;
            case 2:
                verSaldo(conta);
                break;
            case 3:
                printf("Encerrando...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }

    } while(opcao != 3);

    return 0;
}
