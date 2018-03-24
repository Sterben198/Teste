#include<stdio.h>
#include<stdlib.h>

int main(){
  float x,y,z;
  short o;

  system("clear");

  printf("Digite o primeiro numero : \n");
  scanf("%f",&x);


  printf("Digite a operação desejada : \n");
  printf("1 - para +\n2 - para -\n3 - para X\n4 - para /\n");
  scanf("%hd",&o);
  
  if(o >= 5){
    fprintf(stderr,"Operação invalida!\n");
    return 1;
  }

  printf("Digite o segundo numero : \n");
  scanf("%f",&y);

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
        
    fprintf(stderr,"Operação invalida!\n");
    return 1;
	
}

   printf("O resultado é : %f\n",z);


  return 0;
}
