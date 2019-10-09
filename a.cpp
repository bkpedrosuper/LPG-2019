#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n=1,m=1;
    while(true){
        scanf("%d %d", &n,&m);

        if(n==0 && m==0)    break;

        int largura;
        scanf("%d", &largura);
        int n_tabuas;
        scanf("%d", &n_tabuas);
        vector<int> v;

        for(int i=0;i<n_tabuas;i++){
            int x;
            scanf("%d", &x);
            v.push_back(x);
        }
        sort(v.rbegin(),v.rend());

        if(n*100%largura!=0 || m*100%largura!=0 ) cout << "impossivel" << endl;
        else{
            int cont1=0,cont2=0;
            if(n*100%largura==0){
                cout << "AQUI" << endl;
                vector<int> v1;

                int cont1=0;
                vector<int> rest;
                int soma1=0;
                int tam = n*100/largura;
                int w = n_tabuas - tam;
                for(int j=0;j<n_tabuas;j++){
                    if(v[j]>=m) {
                        v1.push_back(v[j]);
                        cout << v1[j]
                        cont1++;
                    }
                    if(cont1==m) break;

                }

                cout << endl;
                for(int j=0;j<sizeof(v1);j++){
                    for(int k=0;k<n_tabuas;k++){
                        if(v1[j]+v[k]==m){
                            v1.push_back()
                            v[k]=-5000;
                            cont1++;

                        }
                    }
                }

                cout << "cont 1 == "<< cont1 << endl;
            }
            if(m*100%largura==0){
                int soma2;
                vector<int> rest;
                int tam = m*100/largura;
                int w = n_tabuas - tam;
                for(int j=0;j<tam;j++){
                    cout << v[j]<< endl;
                    int resto=n-v[j];
                    cont2++;
                    soma2+=largura*v[j];
                }

                for(int j=0;j<tam;j++){
                    for(int k=tam;k<n_tabuas;k++){
                        if(v[j]+v[k]==n){
                            cout << v[k] << endl;
                            v[k]=-5000;
                            cont2++;
                            soma2+=largura*v[k];
                        }
                    }
                }


                //cout << "cont2 == " << cont2 << endl;

            }

            //if(max(cont1,cont2)==-1) cout << "impossivel" << endl;
            //else cout << max(cont1,cont2) << endl;
        }


    }

}
