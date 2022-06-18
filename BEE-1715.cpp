#include <iostream>
 
using namespace std;
 
int main() {
 
    int N,M,i,j;
    cin>>N>>M;
    
    int arr[N][M],count,count2=0;
    
    for(i = 0;i<N;i++){
        count = 0;
        for(j=0;j<M;j++){
            cin>>arr[i][j];
            
            if(arr[i][j]>0){
                count++;
            }
        }
        if(count == M){
            count2++;
        }
    }
    cout<<count2<<endl;
 
    return 0;
}