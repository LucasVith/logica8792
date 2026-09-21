#include<stdio.h>
#include<locale.h>

int main(){

   setlocale(LC_ALL, "pt_BR.UTF-8");

char nomes [4][20] = {"lucas", "diego", "gustavo", "marcos"};

printf("%s\n", nomes[0]);
printf("%s\n", nomes[1]);
printf("%s\n", nomes[2]);
printf("%s\n", nomes[3]);
  return 0;




}