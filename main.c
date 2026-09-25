#include<stdio.h>
#include<locale.h>
#include<string.h>




int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

int n, soma=0;

printf("digite um numero: ");
scanf("%d", &n);

for(int i = 1; i <n; i++){
  if(n % i == 0){
    soma += i;
  }
}
if(soma == n){
  printf("%d é um numero perfeito\n", n);
}else{
  printf("%d não é um numero perfeito\n", n);
}

return 0;


}