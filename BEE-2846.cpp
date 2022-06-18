#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int n;
    cin>>n;
    int first = 1, second = 1, fibo=1;
    cout<<"1";

    for(int i=0; i <= ; i++){

        cout<<" "<<fibo;
        first = second;
        second = fibo;
        
        fibo = first + second;
        
    }

    for(int i=0;i<n;i++){
        cout<<i<<endl;
    }
 
    return 0;
}