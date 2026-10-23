#include<stdio.h>
#include<locale.h>
#include<string.h>


int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");


int opcao;
do{
 printf("\n--- MENU ---\n");
 printf("1 - Dizer olá\n");
 printf("2 - Dizer tchau\n");
 printf("0 - Sair\n");
 printf("Escolha: ");
 scanf("%d", &opcao);
 if(opcao == 1){
  printf("olá\n");
 }else if(opcao == 2){
  printf("tchau!\n");
 }else if(opcao != 0){
 printf("opção inválida!");
 }
}while(opcao != 0);
printf("Até mais!\n");

return 0;


}