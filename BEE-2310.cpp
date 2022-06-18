#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int N, x,y,z,a,b,c;
    double sum=0, sum2=0, sum3=0, sum0=0, sum02=0, sum03=0;
    cin>>N;
    
    while(N--){
        string str;
        cin>>str;
        cin>>a>>b>>c;
        cin>>x>>y>>z;
        
        sum += a; sum2 += b; sum3 += c;
        sum0 += x; sum02 += y; sum03 += z;
        
    }

    cout<<fixed<<setprecision(2)<<"Pontos de Saque: "<<sum0/sum * 100.00 <<" %."<<endl;
    cout<<fixed<<setprecision(2)<<"Pontos de Bloqueio: "<<sum02/sum2 * 100.00<<" %."<<endl;
    cout<<fixed<<setprecision(2)<<"Pontos de Ataque: "<<sum03/sum3 * 100.00 <<" %."<<endl;
 
    return 0;
}