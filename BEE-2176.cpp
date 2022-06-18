#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    char arr[150];
    
    cin>>arr;
    int i,count =0;
    for(i=0;arr[i] ; i++){
        if(arr[i] == '1'){
            count++;
        }
    }
    if(count%2 == 0){
        arr[i] = '0';
    }
    else{
        arr[i] = '1';
    }
    arr[i+1] = '\0';
    cout<<arr<<endl;
 
    return 0;
}