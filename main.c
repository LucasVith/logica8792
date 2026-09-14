#include<stdio.h>
#include<locale.h>



int main(){

   setlocale(LC_ALL, "pt_BR.UTF-8");

int idade;

printf("digite uma idade: ");
scanf("%d", &idade);
if(idade >= 50){
   printf("você é senior!");
}else if(idade >= 18){
printf("você é maior de idade");
}else if(idade >= 12){
printf("você é adolescente");
}else if(idade >=9){
   printf("você é pré-adolescente");
}else{
   printf(" você é criança!");
}
   
 
  return 0;
}