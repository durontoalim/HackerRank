#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,x,y,i,j;
    cin>>a;
    
    for(i=0;i<a;i++){
        cin>>x>>y;

        for(j=2;j<3000;j++){
            if(x%j== 0 && y%j==0){
                cout<<j<<endl;
            }
        }
    }
 
    return 0;
}