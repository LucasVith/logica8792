#include<stdio.h>
#include<locale.h>



int main(){

   setlocale(LC_ALL, "pt_BR.UTF-8");

int idade;

printf("digite uma idade: ");
scanf("%d", &idade);
if (idade >= 18){
   printf(" você é maior de idade!");
}else{
   printf(" você é menor de idade!");
}
   
 
  return 0;
}