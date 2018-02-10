#include<stdio.h>

int main(){
  
  char str[40];
  short k;
  FILE *txt;
  
  txt = fopen("msg.txt","r");
  fgets(str,40,txt);
  fclose(txt);

  printf("Digite a Senha : \n");
  scanf("%hd",&k);

  for(int i = 0; i < 40;i++){
    if(str[i] == '\0'){
      break;
    }
    str[i] = str[i] - k;
  }
  
  printf("Mensagem descriptografada : \n");
  printf("%s",str);

  return 0;
}
