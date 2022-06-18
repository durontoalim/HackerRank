#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    
    int arr[] = {1,2,6,24,120,720,5040,40320};
    int n,count = 0,i;
    cin>>n;

    while(n != 0){
        for(i = 1;  ; i++) if(arr[i] >= n or i > 6) break;
         (arr[i] <= n)? n -= arr[i] : n -= arr[i-1];
          count++;
    }
    cout<<count<<endl;
 
    return 0;
}