#include<stdio.h>
#include<locale.h>
#include<string.h>


int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

int num = 0;
while(num <= 100){
  printf("%d\n", num);
  num++;
}
return 0;


}