#include<stdio.h>
#include<locale.h>
#include<string.h>



int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

 
 int numero;
 printf("digite um número positivo: ");
 scanf("%d", &numero);
 
 while(numero<=0){
  printf("número invalido! digite novamente:");
  scanf("%d", &numero);
 }

printf("número válido: %d\n", numero);

return 0;




}