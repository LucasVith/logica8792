#include<stdio.h>
#include<locale.h>
#include<string.h>


int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");


int opcao;

printf("digite uma número de 1 a 12 para saber quantos dias a no mes digitado!\n");
scanf("%d", &opcao);

switch (opcao)
{

  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
  printf("31 dias!");
  break;
  case 2:
  printf("28 dias!");
  break;
  case 4:
  case 6:
  case 9:
  case 11:
  printf("30 dias!");
  default:
  printf("número inválido!");
  break;


}
return 0;


}