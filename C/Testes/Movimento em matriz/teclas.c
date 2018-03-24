#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
  char c;
  char posi[3][3] = {' ',' ',' ',' ','x',' ',' ',' ',' '};
  int x,y;
  bool l;

  x = 1;
  y = 1;

while(1){
  system("clear");

  printf("%c%c%c\n%c%c%c\n%c%c%c\n",posi[0][0],posi[0][1],posi[0][2],posi[1][0],posi[1][1],posi[1][2],posi[2][0],posi[2][1],posi[2][2]);

  l = true;

  while(l == true){

  scanf("%c",&c);
    switch(c){
   
      case 'w':   
        if(posi[x-1][y] == ' '){

        posi[x-1][y] = posi[x][y];
        posi[x][y] = ' ';
        x--;
    }
        break;

      case 's':
        if(posi[x+1][y] == ' '){
        posi[x+1][y] = posi[x][y];
        posi[x][y] = ' ';
        x++;
     }
        break;

      case 'a':
        if(posi[x][y-1] == ' '){
        posi[x][y-1] = posi[x][y];
        posi[x][y] = ' ';
        y--;
     }
        break;

      case 'd':
        if(posi[x][y+1] == ' '){
        posi[x][y+1] = posi[x][y];
        posi[x][y] = ' ';
        y++;
     }
        break;
      
      case 'j':
        posi[x+1][y] = 'O';
        break;

      case 'k':
        posi[x-1][y] = 'O';
        break;

      case 'u':
        posi[x][y-1] = 'O';
        break;

      case 'i':
        posi[x][y+1] = 'O';
        break;
  }
    l = false;
  }
}
  return 0;
}
