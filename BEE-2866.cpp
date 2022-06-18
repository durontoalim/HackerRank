#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int N;
    
    cin>>N;
    
    while(N--){
        string str;
        string temp;
        int t = 0;
        
        cin>>str;
        
        int len  = str.length();
        
        for(int i=len-1; i>= 0; --i){
            if(str[i] >= 'a' && str[i] <= 'z'){
                cout<<str[i];
            }
        }
        
        // for(int i=t; i>= 0 ; --i){
        //     cout<<temp[i];
        // }

        cout<<endl;
    }
 
    return 0;
}