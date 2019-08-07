#include <stdio.h>

int main(){
  int x = 1;
  char nome[5][50];

  int ndias;
  float preco,total[5],totalganho = 0;

  for(int i=0; i<5; i++){
    printf("digite o nome do cliente:\n");
    scanf("%s", nome[i]);
    printf("digite o numero de diarias: \n");
    scanf("%i", &ndias);

    if (ndias<15){
      preco = 4.00;
    }else
    if (ndias==15){
      preco = 3.60;
    }else
    if (ndias>15){
      preco = 3.00;
    }

    total[i] = preco*ndias;
    totalganho += total[i];

  }

  for(int i=0; i<5; i++){
    printf("O cliente %s teve uma conta de %.2f:\n", nome[i], total[i]);
  }
  printf("O ganho total do Hotel foi%.2f\n", totalganho);



  return 0;
}
