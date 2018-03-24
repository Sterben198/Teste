#include<stdio.h>


int main(){
  int x[3];
  printf("Tamanho do array %zu\n",sizeof x);
  printf("Comprimento do Array %zu\n",sizeof x / sizeof x[0]);
  x[0] = 'A';
  x[1] = 66;
  x[2] = 67;
  
  printf("Valor do Primeiro item : %c\n",x[0]);
  printf("Valor do Segundo item : %c\n",x[1]);
  printf("Valor do Terceiro item : %c\n",x[2]);

  printf("Localização do Array  %p\n",&x);
  printf("Primeiro item  do Array %p\n",&x[1]);

return 0;
}
