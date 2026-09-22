#include<stdio.h>
#include<locale.h>

void saudar(const char *nome){
   printf("Olá %s\n", nome);
   
}

int main(){

   setlocale(LC_ALL, "pt_BR.UTF-8");

saudar("João");
saudar("Lucas");
saudar("Vith");



return 0;




}