#include <iostream>
 
using namespace std;

int fun(int n, int y){
    int sum = 0;
    
    for(int i=2; i<= n; i++){
        sum = (sum+y) % i;
    }
    
    
    return sum;
}
 
int main() {
 
    int N,a,b,count = 1;
    
    cin>>N;

    while(N--){

        cin>>a>>b;

        cout<<"Case "<<count++<<": "<<fun(a,b) + 1<<endl;
    }
 
    return 0;
}