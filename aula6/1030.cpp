#include <bits/stdc++.h>

using namespace std;

vector<int> v;

int jose(int n, int k,int inicio){
  int cont=0;
  int i = inicio;
  while(cont<n-1){
    if(v[i]==1){
      v[i]=0;
      cont++;
    }
    else{
      if(i+1<n) jose(n,k,i+1);
      else jose(n,k,0);
    }

    if((i+k)>=n) i = (i+k)%n;
    else i+=k;

  }


  for(int i=0; i<n;i++){
    if(v[i]==1){
      return i-1;
      break;
    }
  }


}

int main(){
  int b;
  cin >> b;
  for(int i=1;i<=b;i++){
    int n,k;
    scanf("%d %d", &n, &k);
    v.assign(n,1);
    int inicio =k-1;
    cout << "Case: " << i <<": "<< jose(n,k,inicio) << endl;
  }

}
