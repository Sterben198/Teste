#include<stdio.h>
#include<limits.h>

int main(){
  double f = 1.1;
  printf("Tamanho de Float : %zu\n",sizeof f*8);
  printf("O valor de f é : %.30g\n",f);
  return 0;
}
