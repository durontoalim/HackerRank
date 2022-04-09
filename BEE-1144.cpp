#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
 
    int N,i,j;

    cin>>N;
    

    for(i=1;i<=N;i++){
        int pow2 = pow(i,2);
        int pow3 = pow(i,3);
        cout<<i<<" "<<pow2<<" "<<pow3<<endl;
        cout<<i<<" "<<pow2+1<<" "<<pow3+1<<endl;
    }
 
    return 0;
}