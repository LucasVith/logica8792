#include<stdio.h>
#include<locale.h>
#include<string.h>



int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

 
 int opcao = -1;
 while(opcao != 0){
  printf("\nmenu: \n");
  printf("1 - depositar\n");
  printf("2 - sacar\n");
  printf("3 - consultar\n");
  printf("0 - sair\n");
  printf("escolha: ");
  scanf("%d", &opcao);
 
switch(opcao){
  case 1: printf("você escolheu depositar\n"); break;
  case 2: printf("você escolheu sacar\n"); break;
  case 3: printf("você escoheu consultar\n"); break;
  case 0: printf("saindo..."); break;
  default: printf("opção invalida!\n");
}

}

return 0;




}