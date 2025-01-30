#include <stdio.h>
    int main(){

int a, b, c;
int soma;
float media;

printf("Digite a primeira nota: ");
scanf("%d", &a);
printf("Digite a segunda nota: ");
scanf("%d", &b);
printf("Digite a terceira nota: ");
scanf("%d", &c);

soma = a + b + c;
media = (float)(a+b+c) / 3;

printf("a soma das notas é: %d\n", soma);
printf("logo a média é: %.2f\n", media);

if (media >=7){
printf("Parábens, voce passou!!!");
} else{
printf("Tente novamente ano que vem T.T" );
}

return 0;

}