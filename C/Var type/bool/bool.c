#include<stdio.h>
#include<stdbool.h>
int main(){
  bool b;
  printf("O Tamanho de boll é : %zu\n",sizeof b);
    b = 6;
  printf("o valor de b é: %i\n",b);

// A Avaliação da booleana é sempre feita contra o 0, se algo for diferente de 1
// Porem for diferente de 0 é considerado true
// 0 para false e qualquer outro valor para true

  return 0;
}
