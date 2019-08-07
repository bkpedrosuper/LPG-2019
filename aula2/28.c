#include <stdio.h>
#include <string.h>

int main(){
  char nome[100];
  int i, j, k;

  scanf("%s", nome);
  int cont = 0;
  float  total = 0,x,max=0,min=100000000;
  while(strcmp(nome,"fim")!=0){
    scanf("%f\n",&x);
    if(x<min){
      min = x;
    }
    if(x>max){
      max = x;
    }
    total += x;
    cont++;
    scanf("%s", nome);
  }

  float media = total/cont;
  printf("A média dos salários eh %.2f\n", media);
  printf("O maior dos salários eh %.2f \n", max);
  printf("O menor dos salários eh %.2f \n", min);
  return 0;
}
