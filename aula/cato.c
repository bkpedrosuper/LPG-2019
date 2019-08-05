#include <stdio.h>

int main(){

  int x,y;
  int i;
  for(i=0; i<10;i++){
    scanf("%i %i", &x, &y);
    if(x>0 && y>0){
      printf("Primeiro quadrante\n");
    }else
    if(x<0 && y>0){
      printf("Segundo quadrante\n");
    }else
    if(x<0 && y<0){
      printf("Terceiro quadrante\n");
    }
    else if(x>0 && y<0){
      printf("Quarto quadrante\n");
    }else printf("NÃO ESTÁ EM NENHUM QUADRANTE\n");
  }
  return 0;
}
