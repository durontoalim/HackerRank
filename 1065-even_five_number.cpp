#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,sum,i;

    for(i=0;i<5;i++){
        cin>>a;
        if(a%2==0){
            sum = sum+1;
        }
    }
    cout<<sum<<" valores pares"<<endl;
 
    return 0;
}