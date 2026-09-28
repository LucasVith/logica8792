#include<stdio.h>
#include<locale.h>
#include<string.h>




int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

for(int i = 1; i <3; i++){
  for(int j = 1; j <3; j++){
    printf("For externo e for interno: %d %d\n", j, i);
  }
}



return 0;


}