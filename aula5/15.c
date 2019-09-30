#include <stdio.h>
#include <stdlib.h>

#define lin 3
#define col 3

int main(void){
    float *matriz;
    matriz = malloc(col*lin*sizeof(float));
    for(int i=0;i<lin*col;i++){
        printf("%p\n", (matriz+i));
    }
}
