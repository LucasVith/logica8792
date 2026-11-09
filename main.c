#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

float celsiusParaFahrenheit(float c){
  return c * 9 / 5 + 32;
}
    


int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

float celsius;
float fahrenehit;

printf("digite  a temperatura em celsius: ");
scanf("%f", &celsius);

fahrenehit = celsiusParaFahrenheit(celsius);

printf("%.1f c = %.1f f\n", celsius, fahrenehit);

 return 0;
}