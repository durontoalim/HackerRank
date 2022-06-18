#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int t=0;
    float n,arr[3];
    
    while(1){
        cin>>n;
        if(n>=0 && n<=10){
            arr[t++]= n;
        }else{
            cout<<"nota invalida"<<endl;
        }
        if(t>1){
            break;
        }
    }
    float result = (arr[0]+arr[1])/2;
    cout<<"media = "<<fixed<<setprecision(2)<<result<<endl;
 
    return 0;
}