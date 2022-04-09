#include <iostream>
 
using namespace std;
 
int main() {
 
    int N,i,j,k;
    
    while(cin>>N){
        for(i=N;i<=N;i++){
            cout<<"Caso "<<i+1<<": "<<i+1<<" numero"<<endl;
        }
        for(j=0;j<i;j++){
            for(k=0;k<N;k++){
                cout<<k<<endl;
            }
        }
    }
 
    return 0;
}