#include<stdio.h>
#include<locale.h>
#include<string.h>


int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

int num = 10;
while(num >=1){
  printf("%d - programar\n",num);
  num--;
}

return 0;


}