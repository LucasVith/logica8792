#include<stdio.h>
#include<locale.h>
#include<math.h>

void verificarheparimpar(int n){
if(n % 2 == 0){
   printf("%d é par!\n", n);
}else{
   printf("%d é ímpar\n", n);
}
}


int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

  verificarheparimpar(10);
  verificarheparimpar(7);

return 0;




}