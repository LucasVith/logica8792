#include<stdio.h>
#include<locale.h>



int main(){

   setlocale(LC_ALL, "pt_BR.UTF-8");

  float valor, cotacao;

  printf("digite o valor em reais:");
  scanf("%f", &valor);
  printf("digite a cotação do dolar:");
  scanf("%f", &cotacao);
  
  printf("valor em dolares:%.2f\n", valor / cotacao);
   
 
  return 0;
}