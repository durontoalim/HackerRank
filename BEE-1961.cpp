#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int P,N,count=0,arr[100];
    cin>>P>>N;
    
    cin>>arr[0];

    for(int i=1; i<N; i++){
        cin>>arr[i];

        if(abs(arr[i]- arr[i-1]) > P ){
            
            count = 1;
            break;
        }
    }

    if(count == 0){
        cout<<"YOU WIN"<<endl;
    }

    if(count == 1){
        cout<<"GAME OVER"<<endl;
    }
    
 
    return 0;
}