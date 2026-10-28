#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

int opcao;
char placa[7];

printf("\n--- SISTEMA DE TRÂNSITO BRASILEIRO ---\n");
printf("Digite os caracteres da placa do veiculo:\n ");
scanf("%s", &placa);

do{

  printf("\nDigite 1 para ver a placa || digite 0 para sair: ");
  scanf("%d", &opcao);

  switch (opcao){

  case 1:
  printf("PLACA DO VEICULO: %s\n", placa);
  break;

  default:
  printf("numéro invalido!\n");
  break;

}  
  }while(opcao == 2);


  printf("FIM DO PROGRAMA!");

 return 0;
}


