#include <stdio.h>

int main(){
  int i, x, j;
  char ast = '*';
  scanf("%i", &x);
  for(i=0; i<=x;i++){
    for(j=0;j<i;j++){
      printf("*");
    }
    printf("\n");
  }
  i = 0;
  int k;
  for(i=x; i>=0;i--){
    for(j=0;j<i;j++){
      printf(" ");
    }
    for(k=0;k<x-i;k++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
