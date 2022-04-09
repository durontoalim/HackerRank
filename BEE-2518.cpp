#include <bits/stdc++.h>
 
using namespace std;
 
int main() {

    int N;

    while(cin>>N){
        int H,C,L;
        cin>>H>>C>>L;
        float sq = N*sqrt(H*H+C*C);
        
        cout<<fixed<<setprecision(4)<<(sq*L)/(100.00*100.00)<<endl;


    }
    
    return 0;
}