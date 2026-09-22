#include<stdio.h>
#include<locale.h>

int main(){

   setlocale(LC_ALL, "pt_BR.UTF-8");

int idades[3] = {25,35,45};
printf("%s %d %s\n", "Manoel tem, ", idades[0], "anos!");
printf("%s %d %s\n", "Lucas tem,", idades[1], "anos!");
printf("%s %d %s\n", "Gabriel tem, ", idades[2], " anos!");
return 0;




}