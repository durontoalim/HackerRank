#include <iostream>
 
using namespace std;
 
int main() {
 
    int A,B,C;
    while(cin>>A>>B>>C){
        if(A==B && B== C){
            cout<<"*"<<endl;
        }
        else if(A!=B && B== C){
            cout<<"A"<<endl;
        }
        else if(A==B && B != C){
            cout<< "C"<<endl;
        }
        else if(A==C && A!=B){
            cout<<"B"<<endl;
        }
    }
 
    return 0;
}