#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int N,defferent,i;
    char arr[51];
    cin>>N;
    while(N--){
        
        cin>>arr>>defferent;
        
        for(i=0; i<strlen(arr); i++){
            char res = arr[i] - defferent;
            if(res <65){
                res = res+26;
            }
            cout<<res;
        }
        cout<<endl;
    }
 
    return 0;
}