#include <iostream>
 
using namespace std;
 
int main() {
 
    int N,M,i,j,k,l,r1=0,r2=0;
    cin>>N>>M;

    int arr[N][M];

        for(i=0;i<N;i++){
            for(j=0;j<M;j++){
                cin>>arr[i][j];
            }
        }
        for(k=1;k<N-1;k++){
            for(l=1;l<M-1;l++){
                if(arr[k][l] == 42){
                    if(arr[k-1][l-1] == 7 && arr[k-1][l] == 7 && arr[k-1][l+1] == 7){
                        if(arr[k][l-1] == 7 && arr[k][l+1] == 7){
                            if(arr[k+1][l-1] == 7 && arr[k+1][l] == 7 && arr[k+1][l+1]==7){
                                r1 = k+1;
                                r2 = l+1;
                            }
                        }
                    }
                }
            }
        }
        cout<<r1<<" "<<r2<<endl;
 
    return 0;
}