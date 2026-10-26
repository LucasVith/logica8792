#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

const int max_tentativas = 7;
int tentativas[max_tentativas];
int secreto, palpite;
int usadas = 0, acertou = 0;
srand(time(NULL));
secreto = rand() % 100 + 1;
printf("Advinhe o número entre 1 e 100.\n");
printf("você tem %d tentativas.\n", max_tentativas);
do{
  printf("\ntentativa %d: ", usadas + 1);
  scanf("%d", &palpite);
  if(palpite < 1 || palpite > 100){
    printf("Digite um número entre 1 e 100!\n");
  }else{
    tentativas[usadas] = palpite;
    usadas++;
    if(palpite == secreto){
      acertou = 1;
    }else if(palpite < secreto){
      printf("o número secreto é MAIOR!\n");
    }else{
      printf("o número secreto é MENOR!\n");
    }
  }
}while(!acertou && usadas < max_tentativas);
printf("\n--- FIM DE JOGO ---\n");
if(acertou){
  printf("parabéns você acertou em %d tentativa(s).\n", usadas);
}else{
  printf("suas tentativas acabaram. o número era %d.\n", secreto);
}
printf("histórico de palpites:\n");
for(int i = 0; i < usadas; i++){
  printf("%d %d\n", i + 1, tentativas[i]);
}

return 0;


}