#include <iostream>
 
using namespace std;
 
int main() {
 
    int N,i;
    
    while(cin>>N && N != 0){
        int arr[N];
        
        for(i=0;i<N; i++){
            cin>>arr[i];
        }
        cin>>i;
        while(arr[i] != i){
            i = arr[i];
        }
        cout<<i<<endl;
    }
 
    return 0;
}