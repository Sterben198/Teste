#include<stdio.h>

int main(){
  char str[] = {"Hello Word"};
  char *str2 = "Hello Word";


  printf("O valor de str é %s\n",str);
  printf("O valor de str2 é %s\n",str2);
  printf("A localização de str2 é : %c\n",str2[1]);
  return 0;
}
