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

printf("Área: %.2f\n", areaRetangular(5, 3.5));

 return 0;
}