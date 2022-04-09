#include <iostream>
 
using namespace std;
 
int main() {
 
    int N,sum,sum2,result;
    while(cin>>N){
        for(int i=0;i<100;i++){
        sum = i*i;
        for(int j=0;j<N;j++){
            sum2 = j*j;
            result = sum+sum2;
            if(result == N){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
 
    }
    
    return 0;
}