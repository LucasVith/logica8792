#include<stdio.h>
#include<locale.h>

void saudar(){
   printf("Olá mundo!\n");
   printf("salve salve");
}

int main(){

   setlocale(LC_ALL, "pt_BR.UTF-8");

saudar();



return 0;




}