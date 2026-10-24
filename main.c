#include<stdio.h>
#include<locale.h>
#include<string.h>

#define QTD 5

int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

const int DIAS = 7;
float temp[DIAS];
float soma = 0, media;
float maior, menor;
int diamaior = 1, diamenor = 1;
int acimamedia = 0;
for(int i = 0; i < DIAS; i++){
  printf("temperatura do dia %d: ", i + 1);
  scanf("%f", &temp[i]);
  soma += temp[i];
}
media = soma / DIAS;
maior = temp[0];
menor = temp[0];
for(int i = 1; i < DIAS; i++){
  if(temp[i] > maior){
    maior = temp[i];
    diamaior = i + 1;
  }
  if(temp[i] < menor){
    menor = temp[i];
    diamenor = i + 1;
  }
}
for(int i = 0; i < DIAS; i++){
  if(temp[i] > media){
    acimamedia++;
  }
}
printf("\n--- temperatura ---\n");
for(int i = 0; i < DIAS; i++){
  printf("dia %d: %.1f\n", i + 1, temp[i]);
}
printf("\nmédia da semana: %.1f\n", media);
printf("maior: %.1f (dia %d)\n", maior, diamaior);
printf("menor: %.1f (dia %d)\n", menor, diamenor);
printf("dias acima da média: %d\n", acimamedia);


return 0;


}