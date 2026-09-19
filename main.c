#include<stdio.h>
#include<locale.h>

int main(){

   setlocale(LC_ALL, "pt_BR.UTF-8");

int ano;
printf("digite o ano: ");
scanf("%d", &ano);

if((ano % 4 == 0 && ano % 100 !=0) || ano % 400 ==0){
  printf("ano: %d\n", ano);
  printf("ano bissexto!\n");
}else{
  printf("ano: %d\n", ano);
  printf("ano não bissexto!\n");
}



  

  return 0;




}