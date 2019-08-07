#include <stdio.h>

int main(){
  int i, j, k, max, chico=150,ze = 110,cont = 0;
  do{
    chico += 2;
    ze += 3;
    cont++;
  }while(chico>=ze);

  printf("%i\n", cont);


  return 0;
}
