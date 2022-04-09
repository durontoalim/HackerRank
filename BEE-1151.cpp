#include <iostream>
 
using namespace std;
 
int main() {
 
    int N,i,first = 0,second = 1,fibo,fiboo,count = 0;
    cin>>N;
    while(count<N){
        if(count<=1){
            fibo = count;
        }
        else{
            fibo = first+second;
            first = second;
            second = fibo;
        }
        cout<<" "<<fibo;
        count++;
    }
    
 
    return 0;
}