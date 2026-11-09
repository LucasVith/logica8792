#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int soma(int n){
  int total = 0;
  for(int i = 1; i <= n; i++){
    total += i;
  }

return total;
}
    


int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

printf("soma de 1 a n: %d\n", soma(10));

 return 0;
}