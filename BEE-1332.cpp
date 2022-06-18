#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int N;
    cin>>N;
    while(N--){
        char str[100];
        cin>>str;
        if(strlen(str) == 5){
            cout<<"3"<<endl;
        }else if(str[0] == 't' && str[1] == 'w' || str[0]=='t' && str[2]=='o' || str[1] == 'w' && str[2] =='o'){
            cout<<"2"<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
    }
 
    return 0;
}