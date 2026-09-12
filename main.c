#include<stdio.h>
#include<locale.h>



int main(){

   setlocale(LC_ALL, "pt_BR.UTF-8");

  float raio;
  const float pi = 3.14159;

  printf("digite o raio do circulo:");
  scanf("%f", &raio);
  printf("area: %.2f\n", pi * raio * raio);
  printf("perímetro: %.2f\n", 2 * pi * raio);

   
 
  return 0;
}