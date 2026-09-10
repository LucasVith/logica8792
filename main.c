#include<stdio.h>
#include<locale.h>

int main(){

   setlocale(LC_ALL, "pt_BR.UTF-8");

    int a = 5;
    int b = 4;


    printf("o valor da multiplicação é: %d\n",(a * b));

    printf("o valor da divisão é: %d\n", (a / b));

    printf ("o valor da subtração é: %d\n", (a - b));

    printf ("o valor da soma é: %d\n", (a + b));


  return 0;
}