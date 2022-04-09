#include <iostream>
 
using namespace std;
 
int main() 
{

    int N;
    while(cin>>N && N){
        int i,j,count = 0;
        int V[N];
        int max = 0,maximum = 0;
        for(i=0;i<N;i++){
            cin>>V[i];
            if(max<V[i]){
                max = V[i];
            }
        }
        for(i=0;i<N;i++){
            if(maximum<V[i] && V[i] != max ){
                maximum = V[i];
                count = i;
            }
        }
        cout<<count+1<<endl;
    }
    return 0;
}