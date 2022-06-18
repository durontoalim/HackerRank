#include <iostream>
 
using namespace std;
 
int main() {
 
    int A,B,C,result;
    
    while(cin>>A>>B && A != 0 && B != 0){
        C = A+A;
        result = C-B;
        cout<<result<<endl;
    }
 
    return 0;
}