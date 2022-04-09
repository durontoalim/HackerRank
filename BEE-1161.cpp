#include <iostream>
 
using namespace std;
 
int main() {
    long long int M,N;
    while(cin>>M>>N){
        long long int sum = 1,sum2 = 1;
        for(int i=1;i<=M;i++){
            sum *= i;
        }
        for(int j=1;j<=N;j++){
            sum2 *= j;
        }
        cout<<sum+sum2<<endl;
    }
 
    return 0;
}