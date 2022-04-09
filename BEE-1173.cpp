#include <iostream>
 
using namespace std;
 
int main() {
 
    int X,i,n=10,j;
    int N[n];
    cin>>X;
    
    for(i=0;i<n;i++){
        cout<<"N["<<i<<"]"<<" = ";

        for(j=0;j<1;j++){
            cout<<X<<endl;
            X *= 2; 
        }
    }
 
    return 0;
}