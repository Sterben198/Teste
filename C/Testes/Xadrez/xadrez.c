#include<stdio.h>

void set(int c,int cm,int com);


 short tabu[8][8] = {0};
 short i,j,c;
 
int main(){

 set(0,2,1);
 set(6,8,6);

  for(i=0; i < 8; i++){
    for(j=0; j < 8; j++){
      printf("%d ",tabu[i][j]);
      
        
    }
    putchar('\n');
  }

  return 0;
}
void set(int c,int cm,int com){

  for(i=c;i < cm;i++){
    for(j=0;j < 8;j++){
      if(i == com)
        tabu[i][j] = 6;

      else if(j >= 5){

        switch (j){
          case 5:
            c = 2;
            break;
          case 6:
            c = 4;
            break;
          case 7:
            c = 6;
            break;
        }

        tabu[i][j] = (j-c);
      }
      else
        tabu[i][j] = j+1;
     
    }
  }
}
