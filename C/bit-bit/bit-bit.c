#include<stdio.h>

/* & and
   | or 
   ^ xor
   ~ not
   << empurra todos os bits para esquerda (multiplica por 2)
   >> empurra todos os bits para esquerda (divide por 2)
*/
int main(){
 int x , y;
  x = 2; // 10
  y = 3; // 11
         // 10
  printf("%d\n",x & y);
  // 10
  // 11
  // 11
  printf("%d\n",x | y);
  // 10
  // 11
  // 01
  printf("%d\n",x ^ y);
  
  int a = 2;

  printf("%d\n",~a+1);  // Two's complement

  printf("%d\n",a << 1);
  a = 4;
  printf("%d\n",a >> 1);
}
