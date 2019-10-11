#include <stdio.h>

int main(void){
    int h,i,teste=0;
    scanf("%d", &h);
    while(h!=0){
        teste++;
        int vet[h+5];

        if(h==0)    break;
        
        for(i=0;i<h;i++){
            scanf("%d", &vet[i]);
        }

        for(i=0;i<h;i++){
            if(vet[i]==i+1){
                printf("Teste %d\n", teste);
                printf("%d\n\n", i+1);
            }
        }
    scanf("%d", &h);
    }
}