#include <iostream>
 
using namespace std;
 
int main() {
 
    int N,n,i,j;
    while(cin>>N){
        int arr[i][j];
        for(i=0; i<N+1; i++){
            for(j=0; j<N+1; j++){
                cin>>arr[i][j];
            }
        }
        for(i=0; i<N; i++){
            for(j=0; j<N; j++){
                if(arr[i][j] + arr[i][j+1]+ arr[i+1][j] + arr[i+1][j+1] < 2){
                    cout<<"U";
                }
                else{
                    cout<<"S";
                }
            }
            cout<<endl;
        }
        
        
    }
 
    return 0;
}