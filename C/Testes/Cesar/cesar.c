#include<stdio.h>
#include<stdlib.h>

int main(){

  char str[40];
  short k;
  FILE *msg;

  
  printf("Digite Sua Mensagem : \n");
  fgets(str,40,stdin);
  
  printf("Digite uma senha de 0 a 65536 : \n");
  scanf("%hd",&k);

  for(int i = 0; i < 40 ;i++){

    if(str[i] == '\0'){
        break;
    }
    str[i] = str[i] + k;

  }

  msg = fopen("msg.txt","w");
  fputs(str,msg);
  fclose(msg);

  return 0;
}
