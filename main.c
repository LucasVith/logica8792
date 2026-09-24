#include<stdio.h>
#include<locale.h>
#include<string.h>

void maxmin(int v[], int tamanho){
   int max = v[0], min = v[0];
   for(int i =1; i < tamanho; i++){
      if(v[i] > max) max = v[i];
      if(v[i] < min) min = v[i];
   }
   printf("Maximo: %d, minimo: %d\n", max, min);
}


int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

 
  int numeros[] = {4, 8, 2, 15, 6};
  maxmin(numeros, 5);


return 0;




}