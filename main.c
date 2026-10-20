#include<stdio.h>
#include<locale.h>
#include<string.h>


int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

int numero, soma = 0;
printf("Digites números para somar! digite 0 para sair!\n ");
scanf("%d", &numero);
while(numero !=0){
    soma += numero;
  printf("digite um numero:");
scanf("%d", &numero);
}
printf("soma: %d\n", soma);
return 0;


}