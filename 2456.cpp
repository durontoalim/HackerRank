#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,b,c,d,e;
    char C='C';
    char D ='D';
    char N ='N';
    cin>>a>>b>>c>>d>>e;
    if(a<b && b<c && c<d && d<e){
        cout<<C<<endl;
    }else if(a>b && b>c && c>d && d>e){
        cout<<D<<endl;
    }else{
        cout<<N<<endl;
    }
 
    return 0;
}