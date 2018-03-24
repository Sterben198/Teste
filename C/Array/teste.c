#include<stdio.h>

int main(){

  char str[30] = "Getulio";

  for(int i = 0;i < 30;i++){
    if(str[i] == '\0')
      break;
   printf("%x ",str[i]);
}

putchar('\n');

  return 0;
}
