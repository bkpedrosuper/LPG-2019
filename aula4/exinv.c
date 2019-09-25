#include <stdio.h>
#include <stdlib.h>
#define TAM 81

int main (void){
    int i,j,tamanho;
    char st[TAM],aux;

    fgets(st, TAM,stdin);

    while(st[tamanho]!='\0' && tamanho<TAM){
        tamanho++;
    }

    i=0;
    j = tamanho-1;

    while(i<j){
        aux = st[i];
        st[i] = st[j];
        st[j] = aux;
        i++;
        j--;
    }

    printf("%s\n", st);

}
