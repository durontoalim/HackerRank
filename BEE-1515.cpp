#include <iostream>
 
using namespace std;
 
int main() {
 
    int N,i,R,T;
    string str,store;
    while(cin>>N && N != 0){

        int K = 2114;
        
        for(int i=0; i<N;i++){

            cin>>str>>T>>R;
            
            if(T-R < K){
                K = T-R;
                store = str;
            }
            
        }

        cout<<store<<endl;
        
        
    }
 
    return 0;
}