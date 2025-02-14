#include <stdio.h>
    int main(){
        float temperatura, umidade;
        unsigned int estoque;
    
    printf("Entre com a temperatura:\n");
    scanf("%f", &temperatura);
    printf("Entre com a umidade:\n");
    scanf("%f", &umidade);
    printf("Entre com o estoque:\n");
    scanf("%d", &estoque);

    if( temperatura >= 30){
        printf("Temperatura elevada!\n");
    }
    else{
        printf("Temperatura dentro dos parametros!\n");
    } 

    if( umidade >= 10 ){
        printf("Umidade elevada!\n");
    }
    else{
        printf("Umidade dentro dos parametros!\n");
    }

    if( estoque >= 100){
        printf("Estoque abastecido!\n");
    }
    else{
        printf("Faça a reposição do estoque!\n");
    }

        return 0;
    }