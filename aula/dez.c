#include <stdio.h>
#include <math.h>


int main(){
  int cont, i, j, n21=0, n50=0, idade=22;
  while (idade!=-99){
    scanf("%i", &idade);
    if(idade<21 && idade!=-99) n21++;
    if(idade>50) n50++;
  }

  printf("O numero de pessoas com menos de 21 anos eh %i\n", n21);
  printf("O numero de pessoas com mais de 50 anos eh %i\n", n50);
  return 0;
}
