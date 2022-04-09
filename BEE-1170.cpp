#include <iostream>
 
using namespace std;
 
int main() {
 
    int x;
    cin>>x;
    float a;
    for(int i=0;i<x;i++){
        cin>>a;
        int count = 0;
        while(a>1){
            a /= 2;
            count += 1;
        }
        cout<<count<<" dias "<<endl;
    }
    cout<<endl;
 
    return 0;
}