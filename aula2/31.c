#include <stdio.h>

int main(){
  int andares, entraram, sairam, total=0;
  scanf("%i", &andares);

  for (int i =0; i<andares;i++){
    printf("Quantos nego entraram? \n");
    scanf("%i",&entraram);
    printf("Quantos nego sairam? \n");
    scanf("%i",&sairam);

    total += entraram-sairam;
    if(total>15){
      printf(" EXCESSO  DE  PASSAGEIROS  .  DEVEM SAIR\n");
      printf("precisam sair %i pessoas\n", total-15);
    }

  }

}
