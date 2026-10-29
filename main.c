#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

char* tipoVeiculo(char placa[]){
  char primeiro = placa[0];
  if(primeiro >= 'A' && primeiro <= '2'){
    return "veiculo particular";
  }else if(primeiro >= '0' && primeiro <= '9'){
    return "placa irregular";
  }else{
    return "formato desconhecido";
  }
}


int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");


int opcao;
char placa[8];
printf("\n----- SISTEMA DE TRÂNSITO BRASILEIRO -----\n");
printf("DIgite os cacarteres da placa do veículo: ");
scanf("%s", placa);
do{
  printf("\n1 - ver placa | 2 - tipo de veículo | 0 - sair: ");
  scanf("%d", & opcao);
  switch(opcao){
    case 1:
    printf("Placa do veículo: %s\n",(placa));
    break;
    case 2:
    printf("tipo: %s\n", tipoVeiculo(placa));
    break;
    case 0:
    printf("saindo...\n");
    break;
    default:
    printf("Número inválido!\n");
    break;
    }
}while(opcao !=0);
printf("FIM DO PROGRAMA!");
 return 0;
}