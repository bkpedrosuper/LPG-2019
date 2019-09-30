#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,*b,**c,***d;

    scanf("%i", &a);
    *b = 2*a;
    c = &b;
    d = &c;

    printf("%i\n", a);
    printf("%i\n", *b);
    printf("%i\n", *c);
    printf("%i\n", *d);
}
