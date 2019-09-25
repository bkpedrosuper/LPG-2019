#include <stdio.h>
#include <stdlib.h>

#define lin 3
#define col 3

float * transposta(int m, int n,float * mat);

int main(){

    int i, j;

    float *mat;

    mat = (float *) malloc(lin*col*sizeof(float));

    for (i=0; i<lin; i++){
        for (j=0; j<col; j++){
            scanf("%f", mat+(i*col+j));
        }
    }

    float *res;
    res = transposta(col,lin,mat);

    for (i=0; i<lin; i++){
        for (j=0; j<col; j++){
            printf("%.0f ", *(res+(i*col+j)));
        }
        printf("\n");
    }


    return 0;
}

float * transposta(int m, int n,float * mat){
    int i,j;
    float *res;
    res = (float *) malloc(lin*col*sizeof(float));


    for (i=0; i<lin; i++){
        for (j=0; j<col; j++){
            *(res+(j*col+i)) = *(mat+(i*col+j));
        }
    }

    return res;

}
