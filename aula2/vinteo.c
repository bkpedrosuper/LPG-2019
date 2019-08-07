#include <stdio.h>

int main (){
  int n;
  float total=1, multi=1,e;

  scanf("%i", &n);

  for (int i=1;i<=n; i++){
    multi = 1;
    for (int j=1;j<=i;j++){
      multi *= j;
    }
    total += 1.0/multi;
  }

  printf("O E de %i eh igual a %.2f\n",n,total);

  return 0;
}
