#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    string N,n;

    while(getline(cin,N) && getline(cin,n)){

        cout<<"$";

        int len = N.size();
        int len2 = n.size();

        for(int i =0; i <len; i++){
            if( (len-i) % 3 == 0 && i > 0){
                cout<<",";
            }
            cout<<N[i];
        }

        cout<<".";

        if(len2 < 2){
            cout<<"0";
        }

        for(int i=0;i<len2;i++){
            cout<<n[i];
        }
        cout<<endl;
    }
 
    return 0;
}