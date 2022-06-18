#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int N,M,t,j;
    int arr[10001];

    while(cin>>N>>M && N != 0 && M != 0){
        int count = 0;

        for(int i=0;i<=N; i++){
            arr[i] = 0;
        }
        
        for(j=0;j<M;j++){
            cin>>t;
            if(arr[t] == 1){
                count++;
            }
            arr[t]++;
        }
        cout<<count<<endl;
    }
 
    return 0;
}