#include <stdio.h>
#include <stdlib.h>
#define L 3
#define C 3

int main(void){
    int *mat,n,i,j,a,b,aux;

    printf(" QUAIS LINHAS VOCÊ QUER TROCAR ");
    scanf("%d %d",&a,&b);

    a--;
    b--;

    mat = (int*) malloc(L*C*sizeof(int));

    for (int i=0;i<L;i++){
        for(int j=0;j<C;j++){
            scanf("%d", mat+(i*C+j));
        }
    }

    for (int i=0;i<C;i++){
        aux = *(mat+(a*C+i));
        *(mat+(a*C+i)) = *(mat+(b*C+i));
        *(mat+(b*C+i))=aux;

    }

    for (int i=0;i<L;i++){
        for(int j=0;j<C;j++){
            printf(" %d ", *(mat+(i*C+j)));
        }
        printf("\n");
    }




}
