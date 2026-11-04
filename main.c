#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>




int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

char texto [100];
int tamanho = 0;
printf("Digite uma frase: ");
fgets(texto, 100, stdin);
texto[strcspn(texto, "\n")] = '\0';

while(texto[tamanho] != '\0'){
  tamanho++;
}
printf("quantidade de caracteres: %d\n", tamanho);

 return 0;
}