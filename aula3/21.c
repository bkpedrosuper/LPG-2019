#include <stdio.h>

int fat(int n){
    if(n==0)    return 1;
    else    return n * fat(n-1);
}

float comb(int m, int n){
    float c= fat(m)/(fat(n)*fat(m-n));
    return c;

}


int main (void){
    int k ,j;
    scanf("%i%i",&k,&j);

    printf("%.2f\n", comb(k,j));

}
