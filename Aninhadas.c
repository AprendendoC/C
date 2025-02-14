 #include <stdio.h>
  int main(){
    int idade;

printf("Entre com sua idade:\n");
scanf("%d", &idade);

if(idade >= 60){
    printf("você é uma idoso");
}
else if(idade < 60 && idade >= 18){
    printf("Voce é uma adulto!\n");
}
else if(idade < 18 && idade >=12 ){
    printf("Você é um adolescente!\n");
}
else{
    printf("você é um criança!\n");
}
return 0;
  }