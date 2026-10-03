#include<stdio.h>
#include<locale.h>
#include<string.h>




int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

int n;

printf("digite o tamanho do vetor: ");
scanf("%d", &n);

int v[n];

for(int i = 0; i < n; i ++){
  printf("digite o valor de %d:", i +1);
  scanf("%d", &v [i]);
}
int ordenado = 1;
for(int i = 0; i < n - 1; i++){
  if(v[i] > v[i + 1]){
    ordenado = 0;
    break;
  }
}
if(ordenado){
  printf("o vetor está ordenado de forma crescente\n");
}else{
  printf("o vetor não está ordenado\n");
}
return 0;


}