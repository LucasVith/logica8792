#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void contagem(int n){
  if(n == 0){
    printf("fogo!\n");
    return;
  }
  printf("%d\n", n);
  contagem(n - 1);

}


int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

contagem(5);


 return 0;
}