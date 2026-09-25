#include<stdio.h>
#include<locale.h>
#include<string.h>



int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

int n; 
float valor, soma = 0;

printf("quantos numeros deseja digitar: ");
scanf("%d", &n);

for(int i = 0; i <n; i++){
  printf("digite o numero %d:", i +1);
  scanf("%f", &valor);
  soma += valor;
}
printf("média: %.f\n", soma / n);

return 0;


}