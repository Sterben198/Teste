#include<stdio.h>

struct aluno { 
  char *nome;
  short nota;
 };

int main(){

  struct aluno A;
  struct aluno B;
  struct aluno C;
  struct aluno D;
  struct aluno E;
  struct aluno F;

 A.nota = 0;
 A.nome = "teste";
 B.nota = 1;
 B.nome = "teste1";
 C.nota = 2;
 C.nome = "teste2";
 D.nota = 3;
 D.nome = "teste3";
 E.nota = 4;
 E.nome = "teste4";
 F.nota = 5;
 F.nome = "teste5";

  for(int i = 65; i < 70;i++){
    printf("%c.nota : %hd\n %c.nome %s\n",i,(char) i.nota,i,(char) i.nome);
  }

  return 0;
}
