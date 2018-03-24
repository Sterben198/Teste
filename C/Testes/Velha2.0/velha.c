#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include "ui.c"


void chek(char tabu[3][3],char c);
int * ui(char tabu[3][3]);
void end(char c);

int i,j;
int * result;

int main(){

    srand(time(NULL));
    char tabu[3][3] = {'#','#','#','#','#','#','#','#','#'};
    bool flag = true;
    short c = 0;

    while(1){

    for(i=0;i < 3;i++){
        printf("\t\t\t\t");

        for(j=0;j < 3;j++){
            printf("%c ",tabu[i][j]);
        }
        putchar('\n');
    }
    chek(tabu,'X');

    chek(tabu,'O');

    if(c >= 9){
        free(result);
        printf("Velha !!\n");
        return 0;
    }

   
    
            scanf("%d",&i);
            scanf("%d",&j);
            i--;
            j--;

            if(tabu[i][j] == '#'){
                tabu[i][j] = 'X';
                c++;
                
            }
        
 
            result = ui(tabu);

            if(result[2] == 1){
                tabu[result[0]][result[1]] = 'O';
                c++;
            }
            else if(result[2] == 2){
                tabu[result[1]][result[0]] = 'O';
                c++;
            }
            else{
                while(1){
                    result[0] = rand() % 3;
                    result[1] = rand() % 3;
           
                    
                if(tabu[result[0]][result[1]] == '#'){
                    tabu[result[0]][result[1]] = 'O';
                    c++;
                    break;
                }
                    
                }
            }
                
            
        }
    
    return 0;
}

void chek(char tabu[3][3],char c){

    for(i=0; i < 3;i++){
        if(tabu[i][0] == c){
            if(tabu[i][1] == c){
                if(tabu[i][2] == '#'){
                    end(c);
                }
            }
        }
         if(tabu[0][i] == c){
            if(tabu[1][i] == c){
                if(tabu[2][i] == '#'){
                    end(c);
                }
            }
        }
    }
   if(tabu[0][0] == c && tabu[1][1] == c){
       if(tabu[2][2] == c){
           end(c);
       }
   }
    if(tabu[0][2] == c && tabu[1][1] == c){
       if(tabu[2][0] == c){
           end(c);
       }
   }

}
void end(char c){
    free(result);
    printf("Fim Do Jogo!!\nO %c Ganhou !!\n",c);
    exit(0);
}
