#include<stdio.h>
#include<locale.h>

int main(){

   setlocale(LC_ALL, "pt_BR.UTF-8");

int diadasemana;

printf("digite um número de (1 a 7): ");
scanf("%d", &diadasemana);
if(diadasemana ==1){
  printf("domingo");
}else if(diadasemana == 2){
  printf("segunda-feira");
}else if(diadasemana == 3){
  printf("terça-feira");
}else if(diadasemana == 4){
  printf("quarta-feira");
}else if(diadasemana == 5){
  printf("quinta-feira");
}else if(diadasemana == 6){
  printf("sexat-feira");
}else if(diadasemana == 7){
  printf("sábado");
}else{
  printf("valor invalido!");
}



return 0;
}