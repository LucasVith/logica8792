#include<stdio.h>
#include<locale.h>
#include<string.h>


int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

int idade;
int temIngresso;
printf("Digite a sua idade: ");
scanf("%d", &idade);
printf("Possui ingresso? (1 - sim / 0 - não)");
scanf("%d", &temIngresso);

if(idade >= 18 && temIngresso){
  printf("Entrada permitida!\n");
}else{
  printf("Entrada não permitida!\n");
}
return 0;


}