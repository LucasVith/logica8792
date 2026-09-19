#include<stdio.h>
#include<locale.h>

int main(){

   setlocale(LC_ALL, "pt_BR.UTF-8");

int n;
printf("digite um número: ");
scanf("%d", &n);

if(n % 3 == 0 && n % 5 == 0){
  printf("Múltiplo de 3 e 5\n");
}else if(n %3 == 0){
  printf("múltiplo de 3\n");
}else if(n % 5 == 0){
  printf("múltiplo de 5\n");
}else{
  printf("não é múltiplo de 3 nem de 5\n");
}
  

  return 0;




}