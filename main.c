#include<stdio.h>
#include<locale.h>

int main(){

   setlocale(LC_ALL, "pt_BR.UTF-8");

int mes;

printf("digite um número de 1 a 12:");
scanf("%d", &mes);

switch (mes){

  case 1:
  case 2:
  case 12:
  printf("verão");
  break;

  case 3:
  case 4:
  case 5:
  printf("outono");
  break;

  case 6 :
  case 7 :
  case 8 :
  printf("inverno");
  break;
 
  case 9 :
  case 10 :
  case 11:
  printf("primavera");
  break;
  
  default:
  printf("número invalido!");
  break;

  return 0;

}


}