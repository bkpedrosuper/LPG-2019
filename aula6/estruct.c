#include <stdio.h>


int main(void){
  struct pair{
    int first,second;
  };

  struct pair2{
    int first,second;
  };

  struct cadastro{
    char nome[50];
    int idade;
    int numero;
    char rua[50];
  };
  // struct cadastro c1,c2;

  struct pair2 p;

  scanf("%i", &p.first);
  scanf("%i", &p.second);
  printf("%i\n", p.first);
  printf("%i\n", p.second);

}
