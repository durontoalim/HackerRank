#include <bits/stdc++.h>
 
using namespace std;

#define MAXSIZE 1001
int main() {
 
    int N,i,j,temp;
    temp = 0;
    int arr[10001];

    while(cin>>N && N != 0){

        for(i=0; i< N; i++){
            cin>>arr[i];
        }

        for(i=0; i< N; i++){
            for(j=i+1; j < N; j++){
                
                if(arr[i] > arr[j]){
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        for(i=0; i<N; i++){
            if(arr[i] <10){
                cout<<"000"<<arr[i]<<endl;
            }
            else if ( 10<=arr[i] && arr[i]<=99){
                cout<<"00"<<arr[i]<<endl;
            }
            else if(arr[i] <1000){
                cout<<"0"<<arr[i]<<endl;
            }
            else cout<< arr[i] <<endl;
        }
        
    }
 
    return 0;
}