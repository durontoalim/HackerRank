#include <iostream>
 
using namespace std;
 
int main() {
 
    int X,Y,i,first=1,j;
    
    cin>>X>>Y;

    int line = Y/X;
    int line2 = X;

    for(i=first;i<=line;i++){
        cout<<first;
        for(j=first+1;j<=line2;j++){
            cout<<" "<<j;
        }
        cout<<endl;
        first += X;
        line2 += X;

    }
    
    
    return 0;
}