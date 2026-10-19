#include<stdio.h>
#include<locale.h>
#include<string.h>


int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

int num = 0;
int num2 = 0;
int resultado = 0;
while(num < 100){
  num ++;

while(num2 < num){
  num2++;
  resultado = num + num2;
    printf("%d + %d = %d\n", num, num2, resultado);

}
}

return 0;


}