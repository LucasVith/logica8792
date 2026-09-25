#include<stdio.h>
#include<locale.h>
#include<string.h>



int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

int tab ;
printf("digite um número para a tabuada: ");
scanf("%d", &tab);

for(int i = 0; i <=10; i ++){

int resultado = tab * i;
printf("o resultado de %d x %d = %d\n", tab, i, resultado);
}




return 0;


}