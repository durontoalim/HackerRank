#include <iostream>
 
using namespace std;
 
int main() {
 
    int n,x,y,z,i;
    
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x>>y>>z;
        if((x>=200 && x<=300) && y>=50 && z>=150){
            cout<<"Sim"<<endl;
        }else{
            cout<<"Nao"<<endl;
        }
    }
 
    return 0;
}