#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int N,i,j,half,l,x,y;
    while(cin>>N && N != 0){
        int M[N][N];

        half = N/2;
        if(N%2 == 1) half++;

        x = 0;
        y = N-1;

        for(l=1;l<=half;l++){
            for(i=x;i<=y;i++){
                for(j=x;j<=y;j++){
                    M[i][j] = l;
                }
            }
            x++;
            y--;
        }


        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                if(j==0) cout<<setw(3)<<M[i][j];
                else cout<<" "<<setw(3)<<M[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
    }
 
    return 0;
}