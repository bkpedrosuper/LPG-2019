#include <stdio.h>
#include <stdlib.h>

int tam(char *s);

int main(){
    char *s;
    char st[50];

    fgets(st,99,stdin);
    s = st;
    printf("%i é o tam da string\n", tam(s));
}

int tam(char *s){
    int tam = 0;

    while(*(s+tam++)!='\0');
    return tam-1-1;
}
