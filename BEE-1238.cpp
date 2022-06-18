#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int n;
    cin>>n;
    
    for(int k=0;k<n;k++){
        char a[51];
        char b[51];
        
        cin>>a>>b;
        
        int length = strlen(a), length2 = strlen(b);
        int output_len = length+length2;
        char result[output_len];
        int i=0, j =0,index=0;
        while(i<length && j<length2){
            result[index++] = a[i++];
            result[index++] = b[j++];
        }
        while(i<length){
            result[index++] = a[i++];
        }
        while(j<length2){
            result[index++] = b[j++];
        }
        for(int l=0;l<index ;l++){
            cout<<result[l];
        }
        cout<<endl;
    }
 
    return 0;
}