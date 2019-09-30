#include <stdio.h>
#include <stdlib.h>

#define lin 5

int dobro(int *mat){
    for(int i=0;i<lin;i++){
        *(mat+i)= *(mat+i)*2;
    }
}

int main(){
    int *mat;
    mat = malloc(lin*sizeof(int));

    for(int i=0;i<lin;i++){
        scanf("%d", mat+i);
    }

    dobro(mat);

    for(int i=0;i<lin;i++){
        printf("%d ", *(mat+i));
    }
    printf("\n" );

}
