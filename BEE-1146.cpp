#include <iostream>
 
using namespace std;
 
int main() {
 
    int X;
    bool loop = 1;
    
    while(loop==1){
        cin>>X;
        if(X==0){
            break;
        }
        cout<<"1";
        for(int i=2; i<=X; i++){
            cout<<" "<<i;
        }
        cout<<endl;
        
            
    }
    
 
    return 0;
}