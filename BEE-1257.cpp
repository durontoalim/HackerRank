#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    
    int N,i,j,sum;
    char X[51];


    cin>>N;
    while(N--){
        int n;
        cin>>n;

        sum = 0;
        
        for(i=0; i<n;i++){
            cin>>X;
        
            for(j=0; X[j] != '\0' ; j++){
                
                sum += (X[j] - 65)+ i+ j;
            }
        }
        cout<<sum<<endl;
    }
    
 
    return 0;
}