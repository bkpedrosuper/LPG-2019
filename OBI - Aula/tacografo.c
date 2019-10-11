#include <stdio.h>


int main(){

   int n,i;
   scanf("%i", &n);

   int t,v,soma = 0;
   for (i=0; i<n; i++){
       scanf("%i %i", &t, &v);
       soma += t*v;
   }
   printf("%i\n", soma);

}
