#include<stdio.h>
#include<stdlib.h>

int main(){

    int lg,j;
    char str[20];
    char c;
    char buffer[10][20];
    FILE *txt;

    printf("Busque Aqui...\n");
    scanf("%s",str);

    txt = fopen("txt.txt","r");
    fseek(txt,0,SEEK_END);
    lg = ftell(txt);

    for(int i=0;i < lg;i = i+j){
        fseek(txt,i,SEEK_SET);

        for(j=0;j < 20;j++){
            c = fgetc(txt);

            if(c == '\n'){
                j = 1;
                break;
            }

            if(c != '\n'){
                fseek(txt,i+j+1,SEEK_SET);
                continue;
            }
            else{
                fgets(buffer[i],j+1,txt);
                j++;
                break;
            }
        }
      printf("%s\n",buffer[0]);
    }

    return 0;
}