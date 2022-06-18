#include <iostream>
 
using namespace std;
 
int main() {
 
    int N,n,sum=0,extra;
    cin>>N;
    
    for(int i=0; i<N; i++){
        cin>>n;
        extra = n % 3;
        sum += n-extra;
    }
    cout<<sum<<endl;
 
    return 0;
}