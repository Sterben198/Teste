#include<stdio.h>

int main(){

  int x;
  int y = 0;
  
  scanf("%d",&x);

  for(int i=0;i < x;i++){

    y = y + (x - i); 

  }

  printf("%d\n",y);

  return 0;
}
