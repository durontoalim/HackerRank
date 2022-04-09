#include <iostream>
 
using namespace std;
 
int main() {
 
    float a,sum,i;

    for(i=0;i<6;i++){
        cin>>a;
        if(a>0){
            sum = sum+1;
        }
    }
    cout<<sum<<" valores positivos"<<endl;
 
    return 0;
}