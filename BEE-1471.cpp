#include <iostream>
 
using namespace std;
 
int main() {
 
    int R,N,i,j;
    while(cin>>R>>N){
        int arr[N];
        for(i=1;i<=N;i++){
            cin>>arr[i];
        }
        int count = 0;
        int c = 1;
        for(i=1;i<=R;i++){
            c = 1;
            for(j=1;j<=N;j++){
                if(arr[j] == i){
                    c = 0;
                    count++;
                    break;
                }
            }
            if(c == 1){
                cout<<i<<" ";
            }
            if(count == R){
                cout<<"*";
            }

        }
        cout<<endl;

    }
 
    return 0;
}