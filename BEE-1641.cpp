#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,b,c,t=1;
    while(cin>>a && a != 0){
        cin>>b>>c;
        if(b*b+c*c <=(a*2)*(a*2)){
            cout<<"Pizza "<<t<<" fits on the table."<<endl;
        }else{
            cout<<"Pizza "<<t<<" does not fit on the table."<<endl;
        }
        t++;
    }
 
    return 0;
}