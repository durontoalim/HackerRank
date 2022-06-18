#include <iostream>
 
using namespace std;
 
int main() {
 
    int n,x,y,temp,k,l,push,store;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>x>>y;
        int num[x];

        for(int j=0;j<x;j++){
            cin>>push;
            if(y>=push){
                num[j] = y-push;
            }else{
                num[j] = push - y;
            }
        }
        int l = num[0];
        for(k=1;k<x;k++){
            if(num[k]<l){
                l = num[k];
            }
        }

        for(int i=0;i<x;i++){
            if(l == num[i]){
                store = i;
                break;
            }
        }

        cout<<store+1<<endl;

    }
 
    return 0;
}