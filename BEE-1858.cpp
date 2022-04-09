#include <iostream>
 
using namespace std;
 
int main() {
 
    int N,temp = 0,i;
    cin>>N;
    int x[N];
    for(i=0;i<N;i++){
        cin>>x[i];
    }
    int min = x[0];
    for(i=1;i<N;i++){
        if(x[i]<min){
            min = x[i];
        }
    }
    for(i=0;i<N;i++){
        if(min == x[i]){
            cout<<i+1<<endl;
            break;
        }
    }
 
    return 0;
}