#include <stdio.h>

int fat(int n){
    if(n==0)    return 1;
    else    return n * fat(n-1);
}

int comb(int n){
    for(int j=0;j<=n;j++){
        int c= fat(n)/(fat(j)*fat(n-j));
        printf("C(%d,%d)=%d\n", n,j,c);
    }
}

int main (void){
    int n,a;
    scanf("%i",&n);
    a= comb(n);
}
