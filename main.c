#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int ehpar(int n){
  return n % 2 == 0;
}


int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

int quantidade = 0;
int soma = 0;

printf("pares de 1 a 20: ");
for(int i = 1; i <= 20; i++){
  if(ehpar(i)){
    printf("%d ", i);
    quantidade++;
    soma += i;
  }
}
printf("\nquantidade: %d\n ", quantidade);
printf("soma: %d\n", soma);


 return 0;
}