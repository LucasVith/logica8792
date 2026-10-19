#include<stdio.h>
#include<locale.h>
#include<string.h>


int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

for(int i = 1; i <= 5; i++){
 printf("%d - programar\n", i);
}

return 0;


}