#include <iostream>
 
using namespace std;
 
int main() {
 
    int N[1000],count = 0;
    int T;
    cin>>T;
    
    for(int i=0;i<1000;i++){
        for(int j=0;j<T;j++){
            cout<<"N["<<count<<"] = ";
            cout<<j<<endl;
            count++;
        }
    }
 
    return 0;
}