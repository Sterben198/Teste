#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  char s[140];
  srand(time(NULL)*2);

  int chave = rand() % 2147483647;
  
  printf("Digite sua frase : \n");
  fgets(s,140,stdin);
  system("clear");

  for(int i = 0; i < 139;i++){
    s[i] = s[i] ^ chave;
  }

  printf("%s\n",s);

  for(int i = 0; i < 139;i++) {
    s[i] = s[i] ^ chave;
  }
  printf("%d\n",chave);
  printf("%s\n",s);

  return 0;
}
