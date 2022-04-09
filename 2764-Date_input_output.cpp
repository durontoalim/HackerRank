#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
 
    int DD,MM,YY;
    char direc,zero='0';
    
    cin>>DD>>direc>>MM>>direc>>YY;

    if(MM<10){
        cout<<zero<<MM<<direc;
    }else cout<<MM<<direc;
    if(DD<10){
        cout<<zero<<DD<<direc;
    }else cout<<DD<<direc;
    if(YY<10){
        cout<<zero<<YY<<endl;
    }else cout<<YY<<endl;


    if(YY<10){
        cout<<zero<<YY<<direc;
    }else cout<<YY<<direc;
    if(MM<10){
        cout<<zero<<MM<<direc;
    }else cout<<MM<<direc;
    if(DD<10){
        cout<<zero<<DD<<endl;
    }else cout<<DD<<endl;

    char hipen='-';
    direc = hipen;

    if(DD<10){
        cout<<zero<<DD<<direc;
    }else cout<<DD<<direc;
    if(MM<10){
        cout<<zero<<MM<<direc;
    }else cout<<MM<<direc;
    if(YY<10){
        cout<<zero<<YY<<endl;
    }else cout<<YY<<endl;
    
 
    return 0;
}