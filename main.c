#include<stdio.h>
#include<locale.h>
#include<string.h>




int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

int n;

printf("digite o tamanho do vetor: ");
scanf("%d", &n);

int v[n];
int pares = 0, impares = 0;
for(int i = 0; i < n; i ++){
  printf("digite o valor de %d:", i +1);
  scanf("%d", &v [i]);
  if(v[i] % 2 == 0){
     pares++;
  }else{
    impares++;
  }
}
printf("pares: %d\n", pares);
printf("impares: %d\n", impares);

return 0;


}