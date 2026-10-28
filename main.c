#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>


void somar(int a , int b){
  printf("soma = %d\n", a + b);
}

int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

somar(5, 2);

 return 0;
}