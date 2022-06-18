#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int N;
    double sum= 0.0;
    
    cin>>N;
    
    while(N--){
        sum += 6.0;
        sum = 1/sum;
    }
    sum += 3.0;
    
    cout<<fixed<<setprecision(10)<<sum<<endl;
 
    return 0;
}