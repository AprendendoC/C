#include <stdio.h>

int main(){
int numero;

do
{
   printf("digite um numero para sair do programa...");
   scanf("%d",&numero);

   if(numero % 2 == 0){

    printf("%d é par\n ", numero);
 }else {
    printf("%d é impar\n", numero);
 }


} while (numero % 2 !=0);

printf("por digitar um numero par, você saiu do programa.");
return 0;

}