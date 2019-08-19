#include <stdio.h>

double elevado(float x, int n){
    if (n==0) return 1;
    else return x * elevado(x,n-1);
}

int main(void) {
    double x ,y;
    int a,b;
    printf("Ler os reais x e b\n");
    scanf("%lf%lf",&x,&y);
    printf("Ler os inteiros a e b\n");
    scanf("%i%i",&a,&b);


    printf("%.2lf \n", elevado(x,a) + elevado(y,b) + elevado(x-y,a+b));

}
