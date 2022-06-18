#include <iostream>
 
using namespace std;


int main() {
 
    int count[2001],i,j,N,X;

    for(j=0;j<=2000;j++){
        count[j] = 0;
    }

    cin>>N;

    for(i=0;i<N;i++){
        cin>>X;
        count[X]++;
    }
    for(i=0;i<=2000;i++){
        if(count[i]>0){
            cout<<i<<" aparece "<<count[i]<<" vez(es)"<<endl;
        }
    }
    

    
 
    return 0;
}