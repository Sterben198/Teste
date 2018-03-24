#include <stdio.h>

int main(void){     
    char nome[20];
    printf("Digite seu nome: \n");    
    gets(nome,20,stdin);
            
    for(int i=0; i< 20; i++){
       printf("%c", nome[i]);

        if(nome[i+1] == 0){
          putchar('\n');
            break;
          }   
      }
    }
