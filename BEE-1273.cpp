#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int N,len,final_len,t = 0;
    string str[61];
    

    while(cin>>N && N != 0){

        if(t == 1){
            cout<<endl;
        }
        t = 1;

        for(int i=0; i<N; i++){
            cin>>str[i];
        }
        len = 0;
        len = str[0].length();
        for(int i=1; i<N; i++){
            
            if( len < str[i].length() ){
                len = str[i].length();
            }
        }
        final_len = 0;
        for(int i=0; i<N; i++){
            final_len = len - str[i].length();

            for(int j =0; j<final_len; j++){
                cout<<" ";
            }
            cout<<str[i]<<endl;
        }

    }
    
 
    return 0;
}