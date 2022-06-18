#include <iostream>
 
using namespace std;
 
int main() {
 
    int N,n1,n2,sum;
    
    while(cin>>N){
        sum = 0;
        while(N--){
            cin>>n1>>n2;
            sum += n2/2;
        }
        cout<<sum/2<<endl;
    }
 
    return 0;
}