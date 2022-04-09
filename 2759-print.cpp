#include <iostream>
 
using namespace std;
 
int main() {
 
    char A,B,C;
    cin>>A>>B>>C;
    
    cout<<"A = "<<A<<", "<<"B = "<<B<<", "<<"C = "<<C<<endl;

    // A = b, B = c , C = a
    int temp = A;
    A = B;
    B = C;
    C = temp;
    cout<<"A = "<<A<<", "<<"B = "<<B<<", "<<"C = "<<C<<endl;

    //A = c , B = a, C = b
    int temp2 = A;
    A = B;
    B = temp;
    C = temp2;
    cout<<"A = "<<A<<", "<<"B = "<<B<<", "<<"C = "<<C<<endl;
 
    return 0;
}