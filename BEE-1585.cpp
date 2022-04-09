#include <iostream>
 
using namespace std;
 
int main() {
 
    int N,x,y,i;
    cin>>N;
    for(i=0;i<N;i++){
        cin>>x>>y;
        cout<<x*y/2<<" cm2"<<endl;
    }
 
    return 0;
}