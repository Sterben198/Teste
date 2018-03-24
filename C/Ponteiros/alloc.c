#include<stdio.h>
#include<stdlib.h>

int main(){

  int *p;

  long int  x = 5;

  p = malloc(sizeof(x));
  *p = x;

printf("Tamanho de p : %zu\n",sizeof(p));
printf("Valor de x %d\n",*p);
  
free(p);

  return 0;
}
