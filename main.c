#include<stdio.h>
#include<locale.h>
#include<string.h>


int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");


int resposta;
do{
  printf("Executandando o programa..\n");
  printf("Deseja continuar? ( - sim / 0 - não):");
  scanf("%d",&resposta);
}while(resposta == 1);
printf("Programa encerrado!\n");




return 0;


}