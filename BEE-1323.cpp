#include <iostream>
 
using namespace std;
 
int main() {
 
    int N,sum;
    
    while(cin>>N && N != 0 ){
        int X = N;
        sum = 0;
        while(N--){
            sum += X*X;
            X--;
        }
        cout<<sum<<endl;
    }
 
    return 0;
}