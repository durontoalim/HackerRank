#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    char N;
    string n;
    
    while(cin>>N>>n){

        int count = 0;

        if(N=='0' && n[0] == '0') break;

        for(int i=0 ; i<n.length(); i++){
            if(n[i] == '0'){
                if(count != 0){
                    cout<<n[i];
                }
            }
            else if(n[i] != N){
                    cout<<n[i];
                    count = 1;
            }
        }
        if(count == 0){
            cout<<0<<endl;
        }
        else{
            cout<<endl;
        }
    }
    
    return 0;
}