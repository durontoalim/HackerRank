#include <iostream>
 
using namespace std;
 
int main() {
    
    int a,b,temp,i,sum=0;
    cin>>a;
    cin>>b;
    
    if(a>b){
        temp = a;
        a = b;
        b = temp;
    }
    if(a%2==0){
        a++;
    }else{
        a+= 2;
    }
    for(i = a; i<b;i+= 2){
        sum += i;
    }

    cout<<sum<<endl;
 
    return 0;
}