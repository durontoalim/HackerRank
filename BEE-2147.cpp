#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int N;
    
    cin>> N;
    
    while(N--){
        string str;
        float len;
        cin>>str;
        len = str.length();
        cout<<fixed<<setprecision(2)<<len/100<<endl;
    }
 
    return 0;
}