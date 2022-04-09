#include <iostream>

using namespace std;

int main(){
    int A,B,sum=0;
    cin>>A>>B;
    if(1<=A && 1<=B){
        for(int i=A; i<=B;i++){
        sum += i;
        }
    cout<<sum<<endl;
    }
    
    
    return 0;
}