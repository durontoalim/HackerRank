#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int N[20];
    
    for(int i=0;i<20;i++){
        cin>>N[i];
    }
    for(int i=19;0<=i;i--){
            cout<<"N["<<abs(i-19)<<"] = "<<N[i]<<endl;
    }
 
    return 0;
}