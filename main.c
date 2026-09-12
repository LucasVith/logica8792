#include<stdio.h>
#include<locale.h>



int main(){

   setlocale(LC_ALL, "pt_BR.UTF-8");

int n;

 printf("digite um número:");
 scanf("%d", &n);
 if(n > 0){
  printf("positivo\n");

 }else {
  printf("negativo");
 }
   
 
  return 0;
}