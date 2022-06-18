#include <iostream>
 
using namespace std;
 
int main() {
 
    int N;
    
    cin>>N;
    
    

    if(N>=1000){
        cout<< "M";
        int S1 = N/500;
    }
    if(N>=500 && N<1000){
        cout<<"D";
    }

    if(N>=100 && N<500 && N%500) {
        cout<< "C";
    }
    if(N>=50) cout<< "L";
    if(N>=10) cout<< "X";
    if(N>=5) cout<< "V";
    if(N>=1) cout<< "I";
 
    return 0;
}