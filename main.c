#include<stdio.h>
#include<locale.h>
#include<string.h>



int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

int i = 1;
while(i<= 50){
  if(i % 2 == 0){
    printf("%d\n", i);
  }
  i++;
}



return 0;


}