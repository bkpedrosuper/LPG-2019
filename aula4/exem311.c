#include <stdio.h>
#include <stdlib.h>

#define lin 3
#define col 3

float ** transposta(int m, int n,float ** mat);

int main(){

    int i, j;

    float **mat;

    mat = calloc(lin,sizeof(float*));

    for(i=0;i<lin;i++){
        mat[i] = calloc(col,sizeof(float));
    }

    for (i=0; i<lin; i++){
        for (j=0; j<col; j++){
            scanf("%f", &mat[i][j]);
        }
    }

    float **res;
    res = transposta(col,lin, mat);

    for (i=0; i<lin; i++){
        for (j=0; j<col; j++){
            printf("%.0f ", res[i][j]);
        }
        printf("\n");
    }


    return 0;
}

float ** transposta(int m, int n,float ** mat){
    int i,j;
    float **res;
    res = calloc(lin,sizeof(float*));

    for(i=0;i<lin;i++){
        res[i]=calloc(col,sizeof(float));
    }

    for (i=0; i<lin; i++){
        for (j=0; j<col; j++){
            res[j][i] = mat[i][j];
        }
    }

    return res;

}
