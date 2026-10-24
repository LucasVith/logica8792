#include<stdio.h>
#include<locale.h>
#include<string.h>

#define QTD 5
void cadastrar(float notas[]){
  for(int i = 0; i < QTD; i++){
    printf("Digite a nota do aluno %d:", i + 1);
  scanf("%d", &notas[i]);  
  }
}
void mostrar(float notas[]){
  for(int i = 0; i < QTD; i++){
    printf("Aluno %d: %.1f\n", i +1, notas[i]);
  }
}
float calcularmedia(float notas[]){
  float soma = 0;
  for(int i = 0; i < QTD; i++){
    soma += notas[i];
  }
  return soma / QTD;
}
float maiornota(float notas[]){
  float maior = notas[0];
  for(int i =1; i < QTD; i++){
    if(notas[i] > maior){
      maior = notas[i];
    }
  }
  return maior;
}
int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

float notas [QTD];
int opcao;
int cadastrado = 0;

do{
  printf("\n--- controle de notas ---\n");
  printf("1 cadastrar notas\n");
  printf("2 mostrar notas\n");
  printf("3 média da turma\n");
  printf("4 maior nota\n");
  printf("0 sair\n");
  printf("Escolha:");
  scanf("%d", & opcao);
  switch (opcao)
  {
  case 1:
  cadastrar(notas);
  cadastrado = 1;
  break;
  case 2:
  if(cadastrado){
    mostrar(notas);
  }else{
    printf("Nenhuma nora cadastrada ainda.\n");
  }
  break;
  case 3:
  if(cadastrado){
    printf("média da turma: %.2f\n", calcularmedia(notas));
  }else{
    printf("nenhuma nota cadastrada ainda.\n");
  }
  break;
  case 4:
  if(cadastrado){
    printf("maior nota: %.1f\n", maiornota(notas));
  }else{
    printf("nenhuma nota cadastrada ainda.\n");
  }
  break;
  case 0:
  printf("até mais!\n");
  break;
  default:
  printf("opção inválida!\n");
    break;
  }
}while(opcao != 0);


return 0;


}