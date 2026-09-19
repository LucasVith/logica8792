#include<stdio.h>
#include<locale.h>

int main(){

   setlocale(LC_ALL, "pt_BR.UTF-8");

float peso, altura, imc;

printf("dogote o peso (kg): ");
scanf("%f", &peso);

printf("digite sua altura (m): ");
scanf("%f", &altura);

imc = peso / (altura * altura);

if(imc < 18.5){
  printf("Classificação: abaixo do peso!\n");
}else if(imc < 25){
  printf("Classificção: peso normal!\n");
}else if(imc < 30){
  printf("Classificação: sobrepeso!\n");
}else{
  printf("classificação:obesidade!\n");
}

  return 0;




}