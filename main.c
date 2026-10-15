#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<math.h>

struct pessoa{
  char nome[50];
  int idade;
  float altura;
};


int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");


struct pessoa p1 = {"lucas", 23, 1.80};
struct pessoa p2 = {"erik", 23, 1.93};
struct pessoa p3 = {"ramon", 21, 1.75};

printf("Nome: %s | idade: %d | altura: %.2f\n", p1.nome, p1.idade, p1.altura);
printf("Nome: %s | idade: %d | altura: %.2f\n", p2.nome, p2.idade, p2.altura);
printf("Nome: %s | idade: %d | altura: %.2f\n", p3.nome, p3.idade, p3.altura);

return 0;


}