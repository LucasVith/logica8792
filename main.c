#include<stdio.h>
#include<locale.h>

int main(){

   setlocale(LC_ALL, "pt_BR.UTF-8");

int numerosInteiros[5] = {1, 5, 10, 15, 20};
float numerosFloats[5] = {10.5, 20.8, 30.2, 40.9, 50.1};
char carros[3][20] = {"ferrari", "mercedez", "mazda"};

printf("%d %d %d %d %d\n", numerosInteiros[0],numerosInteiros[1],numerosInteiros[2],numerosInteiros[3],numerosInteiros[4]);

printf("%.1f %.1f %.1f %.1f %.1f\n", numerosFloats[0],numerosFloats[1],numerosFloats[2],numerosFloats[3],numerosFloats[4]);

printf("%s %s %s\n", carros[0],carros[1],carros[2]);


return 0;




}