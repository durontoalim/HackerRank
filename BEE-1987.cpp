#include <bits/stdc++.h>

using namespace std;

int main() {

    int sum,i,n,X;

    while(cin>>n){
        sum = 0;
        char N[X];
        cin>>N;
        
        int len= strlen(N);
        
        for(i=0; i<len; i++){
            sum += N[i]-48;
        }

        if(sum % 3 == 0){
            cout<<sum<<" sim"<<endl;
        }
        else{
            cout<<sum<<" nao"<<endl;
        }
    }
 
    return 0;
}