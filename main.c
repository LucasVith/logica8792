#include<stdio.h>
#include<locale.h>

int somar(int a, int b){
 return a + b;
}

int subtrair(int a, int b){
   return a - b;
}

int multiplicar(int a, int b){
   return a * b;
}
int dividir(int a, int b){
   if(b <=0){
      printf("ele precisa ser maior que 0!");
   }else{
      return a / b;
   }

}


int main(){

   setlocale(LC_ALL, "pt_BR.UTF-8");

 int resultado = somar(3,5);
 int resultado1 = subtrair(10, 2);
 int resultado2 = multiplicar(4, 2);
 int resultado3 = dividir(16, 2);

 printf("o resultado da soma é: %d\n", resultado);
 printf("o resultado da subtração é: %d\n", resultado1);
 printf("o resultado da multiplicação é: %d\n", resultado2);
 printf("o resultado da divisão é: %d\n", resultado3);

return 0;




}