#include <stdio.h>
#include <stdlib.h>

#define lin 5
#define col 3

int main(void){
    int **p,i,j;
    p = calloc(lin,sizeof(int *));

    for(i=0;i<lin;i++){
        p[i]=calloc(col,sizeof(int));
    }

    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            scanf("%d", &p[i][j]);
        }
    }

    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<5;i++){
        free(p[i]);
    }

    free(p);


}
