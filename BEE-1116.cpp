#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    float X,Y,N,diving;
    cin>>N;
    
    for(int i=0;i<N;i++){
        cin>>X>>Y;
        diving = X/Y;
        if(Y == 0){
            cout<<"divisao impossivel"<<endl;
        }else{
            cout<<fixed<<setprecision(1)<<diving<<endl;
        }
        
    }
    
    
 
    return 0;
}