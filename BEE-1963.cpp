#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    float A,B;
    
    cin>>A>>B;
    
    float result = ( 100.00*B )/A;
    
    cout<<fixed<<setprecision(2)<<result-100.00<<"%"<<endl;
 
    return 0;
}