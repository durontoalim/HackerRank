#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n,casee=1;
    while(cin>>n){
        int sum=1;
        casee++;
        for(int i=0;i<=n;i++){
            sum += i;
        }
        if(n==0){
            cout<<"Caso "<<casee<<": "<<sum<<" numero"<<endl;
        }else{
            cout<<"Caso "<<casee<<": "<<sum<<" numeros"<<endl;
        }
        cout<<"0";
        for(int i=1;i<=n;i++){
            for(int j=1; j<=i; j++){
                cout<<" "<<i;
            }
        }
        cout<<"\n";
    }
 
    return 0;
}