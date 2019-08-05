#include <stdio.h>

int main(){
  int mat[10];
  int i, menor = 99999999, maior = -999999999, j;
  for (i=0;i<10;i++){
    scanf("%i", &mat[i]);
    if (mat[i]>=maior){
      maior = mat[i];
    }
    if(mat[i]<= menor){
      menor = mat[i];
    }
  }
  printf("O maior numero eh %i\n", maior);
  printf("O menor numero eh %i\n", menor);
}
