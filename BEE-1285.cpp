#include <iostream>
 
using namespace std;
 
int main() {
 
    int N,M,count;
    
    while(cin>>N>>M){
        count = 0;

        if(N>= 838 && N<=1004 || M>= 838 && M<=1004){
            cout<<"0"<<endl;
        }
        else{
            for(int i=N+1; i < M; i++){
                count++;
            }
        }
        cout<<count<<endl;
    }
 
    return 0;
}