# 💰 Projeto: Controle de Contas Bancárias

Este projeto simula um sistema bancário simples, desenvolvido em linguagem C, com o objetivo de gerenciar dados de clientes e suas contas correntes. Foi desenvolvido como atividade do 3º período da faculdade, com foco em aplicar conceitos de structs, funções e manipulação de dados básicos.

## 📌 Objetivo

- Gerenciar contas bancárias com nome do titular, número da conta, saldo e tipo da conta.
- Permitir operações básicas como depósito, saque e transferência.

## 🧱 Estrutura do Projeto

- `main.c`: Arquivo principal que executa o menu e chama as funções.
- `contas.c`: Implementação das funcionalidades das contas bancárias.
- `contas.h`: Cabeçalho com a definição da struct e protótipos das funções.

## 📋 Funcionalidades Implementadas

| Funcionalidade      | Descrição |
|---------------------|-----------|
| Criar Conta         | Solicita ao usuário os dados (nome, número, saldo e tipo da conta). |
| Ver Saldo           | Mostra os dados completos da conta, incluindo saldo formatado. |
| Depositar           | Permite adicionar um valor ao saldo da conta (valor precisa ser positivo). |
| Sacar               | Permite retirar um valor da conta, desde que o saldo seja suficiente. |
| Transferir          | Permite transferir valores entre duas contas diferentes, validando o saldo disponível. |

> Obs: As contas são simuladas na memória; os dados não são salvos em arquivos ou banco de dados.

## 💻 Como Executar

1. Clone este repositório:
   ``bash
   git clone https://github.com/mateeusol/controle-de-conta-bancaria

## 🛠 Requisitos
Compilador C (como GCC)
https://onlinegdb.com/utGaiY-3C

VSCode ou outro editor de sua preferência

## 📚 Aprendizados
Este projeto permitiu praticar:

Declaração e uso de structs

Organização de código em múltiplos arquivos (.h e .c)

Manipulação de entrada/saída com scanf e printf

Uso de ponteiros para passagem por referência
