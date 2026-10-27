#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void soma1(){
  int x, y, resultado;
  printf("\nDigite um valor para x: ");
  scanf("%d", &x);
  printf("\nDigite um valor para y: ");
  scanf("%d", &y);
  resultado = x + y;
  printf("\n a soma de %d + %d = %d", x, y, resultado);
}



int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

soma1();
 
}