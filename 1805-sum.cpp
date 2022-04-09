#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    
    long long int A,B;
    long long int sum=0;
    
    cin>>A>>B;
    
    sum = (A+B) * (B-A +1)/2;

    cout<<sum<<endl;
 
    return 0;
}