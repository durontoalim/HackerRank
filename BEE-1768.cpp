#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int x,y,i,j;
    cin>>x;
    for(i=1;i<=x;i++){
        for(j=1;j<=x-i;j++){
            cout<<" ";
        }
        for(j=1;j<= (2*i)-1 ; j++){
            cout<<"*";
        }
        cout<<" "<<endl;
    }
 
    return 0;
}