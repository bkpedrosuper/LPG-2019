#include <bits/stdc++.h>

using namespace std;

//int fatorial(int n){
//    if (n==0)
    //    return 1;
    //else
//        return n * fatorial(n-1);
//}

int main (){
    int tam=5;
    vector<int> vet1(tam);
    vector<int> vet2(tam);

    for(int i=0;i<tam;i++) {
        cin >> vet1[i];
    }
    for(int i=0;i<tam;i++){
        cin >> vet2[i];
    }

    vet1.swap(vet2);

    cout << "vet1 está abaixo: " <<endl << "opa" << endl;
    for(int i=0;i<tam;i++) cout << vet1[i];
    cout << endl;
    cout << "vet2"<<endl;
    for(int i=0;i<tam;i++) cout << vet2[i];
    cout << endl;
    cout << endl;

    cout << 
}
