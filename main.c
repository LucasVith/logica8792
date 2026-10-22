#include<stdio.h>
#include<locale.h>
#include<string.h>


int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");


int numero, soma = 0;
do{
  printf("Digite um número (0 para parar):");
  scanf("%d",&numero);
  soma += numero;
}while(numero != 0);
printf("soma: %d\n", soma);




return 0;


}