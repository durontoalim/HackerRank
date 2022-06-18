#include <iostream>
 
using namespace std;
 
int main() {
 
    int n,count =2;
    
    cin>>n;
    int first = 1;
    int second = 1;
    int fibo = 1;
    cout<<"0 1";
    while(count !=n){
        cout<<" "<<fibo;
        first = second;
        second = fibo;
        fibo = first + second;

        count++;
    }
    
    cout<<endl;
 
    return 0;
}