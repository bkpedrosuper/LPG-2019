#include <stdio.h>
#include <stdlib.h>

#define largura 3
#define altura 3
#define comprimento 3

int main(void){
    int ***mat = malloc (altura*sizeof(int));

    // for(int i=0; i<altura; i++){
    // }

    for(int i=0; i<altura; i++){
        *(mat+i) = malloc(largura*sizeof(int));
        for(int j=0; j<largura; j++){
            *(*(mat+i)+j) = malloc(comprimento*sizeof(int));
        }
    }

    for(int i=0; i<altura; i++){
        for(int j=0; j<largura; j++){
            for(int k=0; k<comprimento; k++){
                mat[i][j][k] = (i)+(j)+(k);
            }
        }
    }

    for(int i=0; i<altura; i++){
        for(int j=0; j<largura; j++){
            for(int k=0; k<comprimento; k++){
                printf("%d ",mat[i][j][k]);

            }
            printf("\n");
        }
        printf("\n");
    }


}
