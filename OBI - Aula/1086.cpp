#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,m;
    cin >> n >> m;
    while(n!=0 || m!=0){
        int largura;
        scanf("%d",&largura);
        int n_tabuas;
        scanf("%d",&n_tabuas);
        vector<int> vet;

        for(int i=0;i<n_tabuas;i++){
            int x;
            scanf("%d", &x);
            vet.push_back(x);
        }

        if(n*100%largura!=0 || m*100%largura!=0)    cout << "impossivel" << endl;

        else{
            if(n*100%largura==0){
                int w=n_tabuas;
                int cont1=0;
                int tam = n*100/largura;
                for(int j=0;j<tam;j++){
                    if(vet[j]==m)   cont1++;
                    else{
                        int tami = m-vet[j];
                        if()   
                    }
                }
            }

            else{
                int w = n_tabuas;
            }
            

        }



        scanf("%d", &n,&m);
    }
}
