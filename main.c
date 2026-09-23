#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){

   setlocale(LC_ALL, "pt_BR.UTF-8");

char nome[50];

printf("digite seu nome completo aqui: ");
fgets(nome, sizeof(nome), stdin);// Lê até encontrar ENTER

printf("Olá %s", nome);


return 0;




}