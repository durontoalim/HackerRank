#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int N,X;
    cin>>N;
    
    while(N--){
        string arr;
        for(int i=0;i<1;i++){

            // getline(cin,arr);
            cin>>arr>>X;

            if(arr == "Thor"){
                cout<<"Y"<<endl;
            }
            else{
                cout<<"N"<<endl;
            }
        }
    }
    return 0;
}