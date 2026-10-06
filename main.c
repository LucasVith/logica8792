#include<stdio.h>
#include<locale.h>
#include<string.h>
#include "funcoes.h"




int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

printf("resultado: %d\n", soma(2, 3));


return 0;


}