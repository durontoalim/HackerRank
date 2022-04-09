#include <iostream>
 
using namespace std;
 
int main() {
 
    float pi = 3.1415;
    int R,L,v,result;
    cin>>R>>L;
    v = (4.0/3)*pi*(R*R*R);
    
    result = L/v;
    cout<<result<<endl;
 
    return 0;
}