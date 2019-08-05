#include <stdio.h>

int main(){
  float n, cont=0;
  int i;
  scanf("%f",&n);

  cont += n;
  for(i=0;i<n;i++){
    cont += (n-i)/(n+i);
   }
  printf("%.2f\n", cont);
  return 0;
}
