#include<stdio.h>
#include<locale.h>
#include<string.h>




int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");

int contador = 0;

for(int i = 0; i <=9; i++){
  for(int j = 0; j <=9; j++){
    for(int k = 0; k <=9; k++){
      for(int l = 0; l <=9; l++){
        contador++;
            printf("possiveis combinações: %d %d %d %d\n", i, j, k, l);

      }
    }
  }
}
printf("há %d possibilidades de senha", contador);

return 0;


}