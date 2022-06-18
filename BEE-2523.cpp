#include <iostream>
 
using namespace std;
 
int main() {
 
    char arr[1001];
    while(cin>>arr){
        int N,l;
        cin>>N;
        while(N--){
            cin>>l;
            cout<<arr[l-1];
        }
        cout<<endl;
    }
 
    return 0;
}