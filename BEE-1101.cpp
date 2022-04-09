#include <iostream>
 
using namespace std;
 
int main() {
    
    while(1){

        int a,b,temp,i,sum=0,n;
        cin>>a>>b;
        if(a<=0 || b<=0){
            break;
        }
        if(a>b){
            temp = a;
            a = b;
            b = temp;
        }
        for(i=a;i<=b;i++){
            cout<<i<<" ";
            sum +=i;
        }
        cout<<"Sum="<<sum<<endl;
    }
 
    return 0;
}