#include<stdio.h>
#include<locale.h>

int main(){

   setlocale(LC_ALL, "pt_BR.UTF-8");

int opcao;

printf("_____ sistema de pedágio---\n");
printf("1 - moto\n");
printf("2 - carro passeio\n");
printf("3- caminhão\n");
printf("4 - ônibus\n");
scanf("%d", &opcao);

switch (opcao)
{

case 1:
  printf("categoria: moto | tarifa: R$ 5,00\n");
  break;
case 2:
  printf("categoria: carro passeio | tarifa: R$ 10,00\n");
  break;
case 3:
  printf("categoria: caminhão | tarifa: R$ 25,00\n");
  break;
case 4:
  printf("categiria: ônibus | tarifa: R$ 30,00\n");
  break;
default:
  printf("erro: categoria não cadastrada no sistema.\n");
  break;

}

}