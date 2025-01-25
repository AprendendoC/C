 #include <stdio.h>

int main() {
    int N1, N2;
    int soma, subtracao, multiplicacao, divisao;

 
    printf("Entre com o primeiro numero: ");
    scanf("%d", &N1);
    printf("Entre com o segundo numero: ");
    scanf("%d", &N2);

    soma = N1 + N2;
    subtracao = N1 - N2;
    multiplicacao = N1 * N2;
    divisao = N1 / N2;

    printf("A soma é: %d\n", soma);
    printf("A subtração é: %d\n", subtracao);
    printf("A multiplicação é: %d\n", multiplicacao);
    printf("A divisão é: %d\n", divisao);

   return 0;
}

