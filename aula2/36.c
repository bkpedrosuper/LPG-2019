#include <stdio.h>

int main(){
  float qsoma=0,somaq=0;

  for(int i=1; i<=100; i++){
    qsoma += i*i;
  }

  for(int i=1; i<=100; i++){
    somaq += i;
  }
  somaq *= somaq;

  printf("A diferenca entre o \nquadrado da soma e a soma do quadrado dos numeros ate %i e %.0f\n", 100, somaq-qsoma);

  return 0;
}
