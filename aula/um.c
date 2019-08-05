#include <stdio.h>

int main(){
  int x,y;
  scanf("%i %i", &x, &y);
  int i,cont = 0;
  for (i=y+1; i<x; i++){
    if(i%3==0) cont++;
  }
  printf("%i\n",cont);

  return 0;
}
