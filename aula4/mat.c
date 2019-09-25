#include <stdio.h>
#include <stdlib.h>
#define L 3
#define C 3

int main(){
    int *m;

    m = (int *) malloc(sizeof(int)*L*C);

    for (int i=0; i<L; i++){
        for (int j=0; j<C; j++){
            scanf("%i", m+(i * C + j));
        }
    }

    for (int i=0; i<L; i++){
        for (int j=0; j<C; j++){
            printf("%ls ", m+(i * C + j));
        }
        printf("\n");
    }


}
