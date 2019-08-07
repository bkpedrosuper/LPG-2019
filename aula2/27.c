#include <stdio.h>

int main(){
  int n,i;
  scanf("%i", &n);
  float h = 0;
  for(i=1; i<=n; i++){
    h += 1.0/i;
  }

  printf("O H(%i) é: %f\n",n, h);

  return 0;
}
