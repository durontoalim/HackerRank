#include <iostream>
 
using namespace std;
 
int main() {
 
    int N,sum,t,n;
    char ch[301];
    string str;
    cin>>N;
    
    while(N--){
        t=1;
        sum = 0;
        
        cin>>ch>>n>>str;
        
        if(str == "correct"){
            sum += n;
            t++;
        }
        
        
    }
    
    cout<<t<<sum;
 
    return 0;
}