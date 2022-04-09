#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,b,c,x,y,z,temp;

    cin>>a>>b>>c;
    
    if(a>b && a>c){
        if(b>c){
            cout<<c<<endl<<b<<endl<<a<<endl;
        }else{
            cout<<b<<endl<<c<<endl<<a<<endl;
        }
    }
    if(b>c && b>a){
        if(c>a){
            cout<<a<<endl<<c<<endl<<b<<endl;
        }else{
            cout<<c<<endl<<a<<endl<<b<<endl;
        }
    }
    if(c>a && c>b){
        if(b>a){
            cout<<a<<endl<<b<<endl<<c<<endl;
        }else{
            cout<<b<<endl<<a<<endl<<c<<endl;
        }
    }

    cout<<endl<<a<<endl<<b<<endl<<c<<endl;

    return 0;
}