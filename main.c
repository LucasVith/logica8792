#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

float areaRetangular(float base, float altura){
return base * altura;
}
    


int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

float a, b;
printf("digite o valor de A: ");
scanf("%f", &a);

printf("digite o valor de b: ");
scanf("%f", &b);

printf("valor da área: %.2f\n", areaRetangular(a, b));
 return 0;
}