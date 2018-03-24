#include<stdio.h>

int main(){
  int a[] = {2018,2019};
  int *p = a;

  printf("Endereço de memoria de a é : %d \n",*a);
  printf("Endereço de memoria de a é : %d \n",*p);
  
  return 0;
}
