#include<stdio.h>

int print(char *s){
  for(;*s != '\0';s++)
    putchar(*s);

}
int main(){

  char str[] = "Hello Word\n"; /* Duas formas possiveis e indenticas de declarar 
                                  uma string */
  char *s = "Hello Word\n";     

  char str2[] = {65,66,67,68,10,0}; // tudo são números ! hehe

  printf("%s\n%s\n%s\n",str,s,str2);

  print(str);
  print(s);
  print(str2);


  return 0;
}
