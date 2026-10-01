#include<stdio.h>
#include<locale.h>
#include<string.h>




int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

int n;
printf("digite o tamanho do vetor: ");
scanf("%d", &n);
int v[n];
int soma = 0;
for(int i = 0; i < n; i++){
  printf("digite o valor de %d: ", i + 1);
  scanf("%d", &v[i]);
  soma += v[i];
}
printf("soma: %d\n", soma);
printf("média: %.2f\n", (float)soma/n);

return 0;


}