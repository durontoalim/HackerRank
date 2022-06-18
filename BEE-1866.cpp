#include <iostream>
 
using namespace std;
 
int main() {

    int N,X;
    

    cin>>N;
    
    while(N--){
        cin>>X;
        if(X%2 == 0){
            cout<<"0"<<endl;
        }else{
            cout<<"1"<<endl;
        }
    }
 
    return 0;
}