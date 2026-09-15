#include<stdio.h>
#include<locale.h>

int main(){

   setlocale(LC_ALL, "pt_BR.UTF-8");

   int a, b, c, d, e, menor;

   printf("digite um valor para a:");
   scanf("%d", &a);

   printf("digite um valor para b:");
   scanf("%d", &b);

   printf("digite um valor para c:");
   scanf("%d", &c);

   printf("digite um valor para d:");
   scanf("%d", &d);

   printf("digite um valor para e:");
   scanf("%d", &e);

   menor = a;

   if(b < menor) menor = b;
   if(c < menor) menor = c;
   if(d < menor) menor = d;
   if(e < menor) menor = e;

   printf("Menor: %d", menor);

  return 0;
}