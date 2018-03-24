#include<stdio.h>

#include<limits.h>
// caso queira saber os limites
#include<stdint.h>
// forma mais intuitiva de saber os valores das variaveis

int main(){
  int i; // int comum 32bits
  printf("Tamanho : %zubits\n",sizeof i*8);
  short s; // int menor 16bits
  printf("Tamanho : %zubits\n",sizeof s*8);
  long int li; //int 64bits em augumas arquiteturas
  printf("Tamanho : %zubits\n",sizeof li*8);
  // long long int para ser sempre 64bits
  /*
  printf :l = long
          u = unsigned
          h = short
  */
 // int8_t   equivalente a 'char'
 // int16_t   equivalente a 'short'
 // int32_t   equivalente a 'int'
 // int64_t   equivalente a 'long long int'
 // __int128  maior valor de int (sem conversor do printf)

}
