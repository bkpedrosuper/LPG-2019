#include <stdio.h>

int main(void){
  struct funcionario{
    int matricula;
    int tempo;
    int idade;
    int sexo;
    int cpf;
    int setor;
    int cargo;
    int salario;
  } f1,f2,f3;

  printf("LER FUNCIONARIO 1\n");

  scanf("%d\n", &f1.matricula);
  scanf("%d\n", &f1.tempo);
  scanf("%d\n", &f1.idade);
  scanf("%d\n", &f1.sexo);
  scanf("%d\n", &f1.cpf);
  scanf("%d\n", &f1.setor);
  scanf("%d\n", &f1.cargo);
  scanf("%d\n", &f1.salario);


  printf("LER FUNCIONARIO 2\n");

  scanf("%d\n", &f2.matricula);
  scanf("%d\n", &f2.tempo);
  scanf("%d\n", &f2.idade);
  scanf("%d\n", &f2.sexo);
  scanf("%d\n", &f2.cpf);
  scanf("%d\n", &f2.setor);
  scanf("%d\n", &f2.cargo);
  scanf("%d\n", &f2.salario);


  printf("LER FUNCIONARIO 3\n");

  scanf("%d\n", &f3.matricula);
  scanf("%d\n", &f3.tempo);
  scanf("%d\n", &f3.idade);
  scanf("%d\n", &f3.sexo);
  scanf("%d\n", &f3.cpf);
  scanf("%d\n", &f3.setor);
  scanf("%d\n", &f3.cargo);
  scanf("%d\n", &f3.salario);




}
