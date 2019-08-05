#include <stdio.h>

int main(){
  int n, x,tot = 0;
  scanf("%i %i", &n, &x);

  for(int i=0;i<n;i++){
    tot+=x;
  }
  printf("%i\n", tot);

}
