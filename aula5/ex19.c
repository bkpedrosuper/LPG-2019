#include <stdio.h>
#include <stdlib.h>

#define len1 4
#define len2 8
int tru = 0;

int compare(char *arr1, char *arr2){
    for(int i=0;i<len2;i++){
        if(*(arr1)==*(arr2+i)){
            for(int j=0;j<len1;j++){
                if(*(arr1+j)==*(arr2+i+j)){
                    tru =1;
                }
                else{
                    tru=0;
                    break;
                }
            }
            if(tru ==1){
                return 1;
            }
        }
    }
    return 0;
}

int main(void){
    char *arr1, *arr2;

    arr1 = malloc(len1*sizeof(char));
    arr2 = malloc(len2*sizeof(char));

    for(int i=0;i<len1;i++){
        scanf("%c", arr1+i);
    }

    for(int i=0;i<len2;i++){
        scanf("%c", arr2+i);
    }

    if(compare(arr1,arr2)>0)  printf("True\n");
    else printf("False\n");

}
