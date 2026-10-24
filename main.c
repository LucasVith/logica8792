#include<stdio.h>
#include<locale.h>
#include<string.h>


int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

const int  ALUNOS = 5;
float notas[ALUNOS];
float soma = 0;
for(int i = 0; i < ALUNOS; i++){
  printf("nota do aluno %d: ", i + 1);
  scanf("%f", &notas[i]);
  soma += notas[i];
}
printf("\n--- notas ---\n");
for(int i = 0; i < ALUNOS; i++){
  printf("aluno %d: %.1f\n", + 1, notas[i]);
}
printf("\nmédia da turma: %.1f\n", soma / ALUNOS);

return 0;


}