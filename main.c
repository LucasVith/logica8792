#include<stdio.h>
#include<locale.h>

int main(){

   setlocale(LC_ALL, "pt_BR.UTF-8");

float n1, n2, n3 , media;

printf("digite a nota 1:");
scanf("%f", &n1);

printf("digite a nota 2:");
scanf("%f", &n2);

printf("digite a nota 3:");
scanf("%f", &n3);
 media= (n1 +n2 + n3) / 3;

 if(media >=7){
  printf("aprovado!");
 }else if(media >=5){
  printf("recuperação");
 }else{
 printf("reprovado!");
 }



return 0;
}