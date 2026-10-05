#include<stdio.h>
#include<locale.h>
#include<string.h>


int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

int voto;

printf("Candidatos concorrendo:\n10- Manoel\n20- Carla\n30- Bianca\n40- Henrique\n50- Bruno\n");
printf("digite o número do seu candidato:\n");
scanf("%d", &voto);

if(voto == 10){
  printf("Candidato escolhido: Manoel");
}else if(voto == 20){
  printf("Candidato escolhido: Carla");
}else if(voto == 30){
printf("Candidato escolhido: Bianca");
}else if(voto == 40){
  printf("Candidato escolhido: Henrique");
}else if(voto == 50){
printf("Candidato escolhido: Bruno");
}else if(voto == 0){
  printf("voto nulo");
}else{
  printf("voto invalido!");
}
return 0;


}