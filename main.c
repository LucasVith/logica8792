#include<stdio.h>
#include<locale.h>

int main(){

   setlocale(LC_ALL, "pt_BR.UTF-8");
int soma = 0;
int i;
for( i = 1; i <=5; i ++){
  
  soma = soma + i;
  
  
}
printf(" soma é %d", soma);


return 0;




}