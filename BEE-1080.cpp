#include <iostream>
 
using namespace std;
 
int main() {
    int N,zero = 0,position;
    
    for(int i=1;i<=10;i++){
        cin>>N;
        if(N>zero){
            zero = N;
            position = i;
        }
        
    }
    cout<<zero<<endl<<position<<endl;
 
    return 0;
}