#include<stdio.h>
#include<locale.h>

int main(){

   setlocale(LC_ALL, "pt_BR.UTF-8");

int idade;
int ehestudante;

printf("qual a sua idade?");
scanf("%d", &idade);
printf("\nvocê é estudante (0 - não | 1 - sim:)");
scanf("%d", &ehestudante);

if((idade >=60)&& (ehestudante ==1)){
  printf("parabens, você tem direito a desconto!");
}else{
  printf("infelizmente você não tem desconto");
}


return 0;
}