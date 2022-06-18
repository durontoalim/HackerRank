#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int N,n,count;
    float sum;
    int arr[1001];
    cin>>N;
    while(N--){
        cin>>n;
        sum = 0;
        count = 0;
        for(int i=0; i<n;i++){
            cin>>arr[i];
            sum += arr[i];
        }

        sum /= n;
         
        for(int i=0; i < n; i++){
            if(arr[i] > sum){
                count++;
            }
        }
        float result = count/(float)n;
        
        cout<<fixed<<setprecision(3)<<result*100.00<<"%"<<endl;
        
    }
 
    return 0;
}