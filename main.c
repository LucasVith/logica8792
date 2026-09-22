#include<stdio.h>
#include<locale.h>

int main(){

   setlocale(LC_ALL, "pt_BR.UTF-8");


   int x = 10;
   int *p = &x;

   printf("valor de x : %d\n", x);
   printf("Endedereço de x: %p\n", &x);
   printf("Valor via ponteiro: %d\n", *p);




return 0;




}