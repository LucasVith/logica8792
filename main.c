#include<stdio.h>
#include<locale.h>



int main(){

   setlocale(LC_ALL, "pt_BR.UTF-8");

  float n1, n2, n3, media;

  printf("digite três notas:");
  scanf("%f %f %f",&n1, &n2, &n3);

  media = (n1 + n2 + n3) / 3;
  printf("média: %.2f\n", media);

   
 
  return 0;
}