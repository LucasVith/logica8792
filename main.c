#include<stdio.h>
#include<locale.h>
#include<string.h>




int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

int n;
float nota, soma = 0;

printf("quantos alunos tem na turma: ");
scanf("%d", &n);
for(int i =0; i < n; i++){
  printf("digite a nota do aluno %d: \n", i + 1);
  scanf("%f", &nota);
  soma += nota;
}
printf("média da turma: %.2f\n", soma / n);

return 0;


}