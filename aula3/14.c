#include <stdio.h>

double soma(double m){
    if(m==0)    return 0;
    else    return m + soma(m-1);
}

int main(void){
    double k;
    scanf("%lf", &k);
    printf("%.0lf\n", soma(k));
}
