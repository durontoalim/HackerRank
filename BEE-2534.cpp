#include <iostream>

using namespace std;

int main() {

    int N,Q,temp;
    while(cin>>N>>Q){
            int k,i,j,n[N],q,l;
        for(k=0; k<N;k++){
            cin>>n[k];
        }
        for(i=0;i<N;i++){
            for(j=i+1;j<N;j++){
                if(n[j]>n[i]){
                    temp = n[i];
                    n[i] = n[j];
                    n[j] = temp;
                }
            }
        }

        for(l=0;l<Q;l++){
            cin>>q;
            cout<<n[q-1]<<endl;
        }
    }

    return 0;
}
