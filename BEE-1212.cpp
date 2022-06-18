#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    string A,B;
    int i,j;
    
    while(cin>>A>>B){
        for(i=0; i<A.length(); i++){
            cout<<A[i];
        }
        for(j=0; j<B.length(); j++){
            cout<<B[j];
        }
        cout<<endl<<B[0];
    }
 
    return 0;
}