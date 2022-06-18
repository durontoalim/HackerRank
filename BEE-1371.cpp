#include <iostream>
 
using namespace std;
 
int main() {
 
    long long N,sum,i;
    
    while(cin>>N && N != 0){

        sum =0;
        
        for(i=1; i<=N; i += 2){
            sum += i;
            
            if(sum > N) break;
            
            if(i>1) cout<< " ";
            cout<< sum;
        }

        cout<<endl;
    }
 
    return 0;
}