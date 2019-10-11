#include <stdio.h>
#include<math.h>
#include <stdbool.h>

int main(void){
    float raio, largura, altura, diagonal;
    int testes=0;

    while(true){
        testes++;
        scanf("%f", &raio);
        if(raio==0) break;
        scanf("%f %f", &largura, &altura);

        diagonal = sqrt(pow((largura/2),2)+pow((altura/2),2));

        if(diagonal<=raio)  printf("Pizza %d fits on the table.\n", testes);
        else printf("Pizza %d does not fit on the table.\n", testes);
        
    }
}