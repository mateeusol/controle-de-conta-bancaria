#ifndef CONTAS_H
#define CONTAS_H

// estrutura da conta bancária
typedef struct {
    char nomeTitular[100];
    int numeroConta;
    float saldo;
    char tipoConta[20];
} ContaBancaria;

// funções disponíveis
void criarConta(ContaBancaria *conta);
void verSaldo(ContaBancaria conta);

#endif


