#include <bits/stdc++.h>

using namespace std;
#define MAX 10004


int f(int n,int k){
  if(n==1)  return 0;
  return (f(n-1,k)+k)%n;
}

int main(){

    int cases, n, k; cin >> cases;

    for (int c=1; c<=cases; c++){
        cin >> n >> k;
        printf("Case %i: %i\n", c, f(n,k)+1);
    }


    return 0;
}
