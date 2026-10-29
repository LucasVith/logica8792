#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int quadrado(int numero){
  return numero * numero;
}


int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

int resultado;
int num;
printf("Digite um número para ver ele ao quadrado:\n ");
scanf("%d", &num);
resultado = quadrado(num);
printf("o resultado é: %d", resultado);


 return 0;
}