#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int count = 0,l,i;
    string s;
    
    while(getline(cin,s)){
        l = s.length();
        
        for(i=0;i<l;i++){
            if(s[i] == '_'){
                if(count == 0){
                    cout<<"<i>";
                    count = 1;
                }
                else{
                    cout<<"</i>";
                    count = 0;
                }
            }
            else if(s[i] == '*'){
                if(count == 0){
                    cout<<"<b>";
                    count = 1;
                }
                else{
                    cout<<"</b>";
                    count =0;
                }
            }
            else{
                cout<<s[i];
            }
        }
        cout<<endl;
    }
 
    return 0;
}