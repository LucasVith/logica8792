#include<stdio.h>
#include<locale.h>
#include<string.h>


int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

int n;
do{
  printf("Digite um número (não negativo):");
  scanf("%d", &n);
} while(n < 0);

printf("Você digitou: %d\n", n);




return 0;


}