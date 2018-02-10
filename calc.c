#include<stdio.h>
#include<stdlib.h>

int main(){
  int x,y,z;
  short o;

  system("clear");

  printf("Digite o primeiro numero : \n");
  scanf("%d",&x);


  printf("Digite a operação desejada : \n");
  printf("1 - para +\n2 - para -\n3 - para X\n4 - para /\n");
  scanf("%hd",&o);
  
  if(o >= 5){
    printf("Operação invalida!\n");
    break;
  }

  printf("Digite o segundo numero : \n");
  scanf("%d",&y);

  switch(o)
{
  case 1:
    z = x + y;
    break;
  case 2:
    z = x - y;
    break;
  case 3:
    z = x * y;
    break;
  case 4:
    z = x / y;
    break;

  default:
        
    printf("Operação invalida!\n");
    goto end;
}

   printf("O resultado é : %d\n",z);


  return 0;
}
