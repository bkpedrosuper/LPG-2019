#include <stdio.h>
#include <math.h>


int main(){
  double vp = 1000.0;
  double t = .05,vf;
  int i;

  for(i=1;i<=10;i++){
    vf = vp * pow(1.0+t,i);
    printf("Valor acumulado ate o ano %i: %f\n",i, vf);
  }
  return 0;
}
