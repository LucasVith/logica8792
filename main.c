#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

float lerpositivo(char mensagem[]){
  float valor;
do{
  printf("%s", mensagem);
  scanf("%f", &valor);
  if(valor <=0){
    printf("valor inválido! digite um número maior que 0.\n");
  }
}while(valor <= 0);
return valor;
}

int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

float idade = lerpositivo("digite a idade: ");
float altura = lerpositivo("Digite a altura (M)" );
float peso = lerpositivo("Digite o peso (KG) ");

printf("\nidade: %.0f anos\n", idade);
printf("IMC: %f\n", peso / (altura * altura));


 return 0;
}