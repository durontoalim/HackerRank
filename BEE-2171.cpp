#include <iostream>
 
using namespace std;
 
int main() {
 
    int N,sum;
    while(cin>>N && N != 0){
        sum = 0;
        for(int i=1; sum+i<=N; i++){
            sum += i;
        }
        
        cout<<sum<<" "<<N-sum<<endl;
    }
 
    return 0;
}