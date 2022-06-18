#include <iostream>
 
using namespace std;
 
int main() {
 
    long long int N,i,sum=0;
    cin>>N;
    long long int arr[N];
    for(i=0;i<N;i ++){
        cin>>arr[i];
    }
    long long int count =0,count2=0;
    for(i=0;i<N;i ++){
        if(arr[i]%2==1){
            count++;
            sum +=arr[i];
        }else{
            count2++;
            sum += arr[i];
            break;
        }
    }
    if(count2 == 0){
        cout<<count<<" "<<sum-count<<endl;
    }
    else{
        cout<<count+count2<<" "<<sum+count+count2<<endl;
    }
 
    return 0;
}