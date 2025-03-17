#include <stdio.h>

int main() {
  int opcao;
  int agencia;
  int conta;
  float saldo = 1000;
  printf("Escolha uma opção:\n");
  printf("1. Verificar saldo\n");
  printf("2. Fazer depósito\n");
  printf("3. Fazer saque\n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      printf("Saldo atual: R$ %f\n", saldo);
      break;
    case 2:
      printf("Digite a agencia:\n");
      scanf(":"), & agencia;
      printf("Digite a conta:\n");
      printf("Digite o cpf:\n");
      break;
    case 3:
      printf("Saque realizado com sucesso\n");
      break;
    default:
      printf("Opção inválida\n");
  }

  return 0;
}