#include <stdio.h> 
   
void recursivo(int numero){
    if(numero > 0){
        printf("%d \n", numero);

        recursivo(numero - 1);
       /* printf("%d \n", numero); /*a ordem dos fatores acaba alterando o resultado, se necessario comente*/
    }
}

int main(){

int quantidade = 10;

printf("contagem regressiva... ");
recursivo(quantidade) ;

return 0;
}