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
  if(v[i] < 0){
    v[i] = 0;
  }
}
printf("vetor ajustado: \n");
for(int i = 0; i < n; i++){
  printf("%d", v[i]);
}
printf("\n");

return 0;


}