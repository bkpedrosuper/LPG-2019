#include <stdio.h>

int fatorial(int n){
    if (n==0)
        return 1;
    else
        return n * fatorial(n-1);
}

int main (){
    int k;
    scanf("%d", &k);
    printf("%d\n", fatorial(k));
    printf("oi\toi");


    return 0;
}
