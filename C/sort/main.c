#include<stdio.h>

int sort(const int array[],int l);
void swap(int *x,int *y);

int main(){

  int *array;
  int l;

  printf("Tamanho Do Array :\n");

  scanf("%d",&l);

  printf("Prencha-o :\n");

  for(int i=0;i< l;i++){
    scanf("%d",&array[i]);
  }

  sort(array,l-1);

  for(int i=0;i < l;i++){
    printf("%d ",array[i]);
  }

  putchar('\n');


  return 0;
}

void swap(int *x,int *y){

  int z;

  z = *x;

  *x = *y;
  *y = z;
}

int sort(const int array[],int l){
  int j;
  int x;

  j = 0;
  x = array[l];
  

  for(int i=0;i < l;i++){

    if(array[i] > x){
      swap(&x,&array[i]);
      j++;    
    }
    else{
      j++;
    }
  }


  if(x == array[1]){
    return 0;
  }
  else if(j >= l-1){
    array[l] = x;
    sort(array,l-1);
  }
}
