#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int n;
    while(cin>>n){
        int N = n/2+1;
        for(int i=1; i<=N;i++){
            for(int j=1;j<=N-i;j++){
                cout<<" ";
            }
            for(int k=1;k<=2*i-1;k++){
                cout<<"*";
            }
            cout<<endl;
        }
            int count=1;
            while(count<=2){
            for(int j=count;j<=N-1;j++)
                    cout<<" ";
            int p=2*count-1;
            for(int s=1;s<=p;s++)
                    cout<<"*";
                cout<<endl;
                count++;
        }
        cout<<endl;

    }
 
    return 0;
}