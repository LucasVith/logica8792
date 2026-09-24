#include<stdio.h>
#include<locale.h>
#include<string.h>



int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

 
  int n;
  printf("digite um numero:");
  scanf("%d", &n);
  
  if (n %2==0){
printf(" o numero é par");
  }else{
   printf("o numero é impar");
  }


return 0;




}