#include<stdio.h>
#include<locale.h>
#include<string.h>



int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

int numero, contador = 0;

printf("digite numeros (0 para parar): \n");
scanf("%d", &numero);

while(numero != 0){
  contador++;
  scanf("%d", &numero);
}

printf("quantidade de numeros digitados: %d\n", contador);

return 0;


}