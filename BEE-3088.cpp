#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    string par;
    int i;
    while(getline(cin,par)){
        int len = par.length();
        for(i=0;i<len;i++){
            if(par[i-1] != ' '){

                if(par[i+1] == ',' || par[i+1] == '.'){
                    
                }
                else{
                    cout<<par[i];
                }
            }
            
            else{
                cout<<par[i];
            }
        }
        cout<<endl;
    }
 
    return 0;
}