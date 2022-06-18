#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int N;
    cin>>N;
    getchar();
    while(N--){

        string str;
        getline(cin,str);
        
        int len = str.length();

        int count = 0;

        // for(int i=0 ; i<len; i++){

        //     if(str[i] == ' '){
        //         count = 0;
        //     }
        //     if(str[i] != ' '){
        //         if(count == 0){
        //             cout<<str[i];
        //             count = 1;
        //         }
        //     }
        // }

        if(str[0]>=97 && str[0]<=122) cout<<str[0];

        for(int i=1; i<len; i++){
            if(str[i]>=97 && str[i]<=122){
                if(str[i-1]<97 || str[i-1]>122){
                    cout<<str[i];
                }
            }
        }
        
        cout<<endl;
    }
 
    return 0;
}