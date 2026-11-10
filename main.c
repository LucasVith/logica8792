#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int quadrado(int n){
 return n * n; 
}


int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

int a;
printf("digite o valor de A: ");
scanf("%d", &a);

printf("valor de A ao quadrado é:%d\n ", quadrado(a));


 return 0;
}