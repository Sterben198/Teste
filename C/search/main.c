#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

  int lg;
  int x;
  char s[15];
  char c;
  FILE *target;

  printf("Busque aqui...\n");
  scanf("%s",s);

  x = strlen(s);

  target = fopen("txt.txt","r");
    if(target == NULL){

      fprintf(stderr,"Erro ao abrir o arquivo ! \n");
      return 1;
    }

  fseek(target,0,SEEK_END);
  lg = ftell(target);

 
    
    for(int i=0;i < lg;i++){
     
    fseek(target,i,SEEK_SET);
    c = fgetc(target);

       for(int j=0;j <= x;j++){

        if(c == s[j]){

          fseek(target,i+j+1,SEEK_SET);
          c = fgetc(target);
        }
        else{
          break;
        }

       if(j == x-1){

          system("clear");
         
          fseek(target,i,SEEK_SET);

          fgets(s,14,target);

          printf("\n%s\n",s);
          
          fclose(target);
          return 0;
        }

      }

   }

   fprintf(stderr,"Nada encontrado !\n");
   fclose(target);  
 
   return 0;
}
