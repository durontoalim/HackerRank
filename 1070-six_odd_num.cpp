#include <iostream>
 
using namespace std;
 
int main() {
 
    int n,i;
    cin>>n;
    
    for(i=n;i<=n+11;i++){
        if(i%2==1){
            cout<<i<<endl;
        }
    }
 
    return 0;
}