#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
bool hepar(int numero){
    return(numero % 2 == 0);
}

int main(){

   setlocale(LC_ALL, "pt_BR.UTF-8");

   bool resultado1 = hepar(4);
   bool resultado2 = hepar(7);
   bool resultado3 = hepar(20);
   bool resultado4 = hepar(9);
   bool resultado5 = hepar(11);

   printf("4 é par? %d\n", resultado1);
   printf("7 é par? %d\n", resultado2);
   printf("20 é par? %d\n", resultado3);
   printf("9 é par? %d\n", resultado4);
   printf("11 é par? %d\n", resultado5);

 
  return 0;
}