#include<stdio.h>
#include<stdlib.h>

#define MALLOC(p,size){ \
p  = malloc(size);\
    if(p == NULL){\
            fprintf(stderr,"Menoria insuficiente\n");\
            exit(1);\
        }\
}

void * malloc_s(size_t size){
    void *p;
    p = malloc(size);
    if(p == NULL){
        fprintf(stderr,"Memoria insuficiente\n");
        exit(1);
    }
    return p;
}

int main(){
    int *p,i;
    int *p2;


    MALLOC(p,5*sizeof(int));
    MALLOC(p2,sizeof(int));
  
    *p2 = 10;
    *p = 5;
    *(p+1) = 10;
    *(p+2) = 20;
    *(p+3) = 256;
    *(p+4) = 8;
   

    for(i=0;i < 5;i++)
        printf("%d\n",*(p+i));

    free(p);
    free(p2);

    return 0;
}