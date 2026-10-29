#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void mostrarNome(char nome[]){
  printf("nome: %s\n", nome);
}


int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

mostrarNome("eduardo");

 return 0;
}