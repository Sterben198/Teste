#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int x,y;

ini:

  srand(time(NULL));
  x = rand() % 100;
  

  printf("========= Jogo da adivinhação =========\n"
          "Adivinhe uma número de 1 a 100:\n");

 while(1){  
   scanf("%d",&y);

   if(y > x){
     printf("chute pra baixo\n");
     continue;
   }
   else if(y == x){
    printf("Você acertou!!!\n");
    break;
   }
  
   else if(y < x){
    printf("chute pra cima\n");
    continue;
   }
   else if(y <= 0){
    printf("Digite um valor valido!!\n");
    continue;
   }
   else{
    printf("Digite um valor valido!!\n");
    continue;
   }
    
 }

  getchar();

  goto ini;
return 0;
}
