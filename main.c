#include<stdio.h>
#include<locale.h>

int main(){

   setlocale(LC_ALL, "pt_BR.UTF-8");

float a, b, c;

printf("digite os três lados do triângulo:");
scanf("%f %f %f", &a, &b, &c);

if(a+b > c && a +c > b && b +c >a){
  printf("os lados formam um triângulo!\n");
}else{
  printf("os lados não formam um triângulo!\n");
}
return 0;
}