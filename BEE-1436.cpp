#include <iostream>
 
using namespace std;
 
int main() {
 
    int N,person,l,temp,count =1;
    cin>> N;
    int x[10];
    
    while(N--){
        cin>>person;
        for(int i=0;i<person;i++){
            cin>>x[i];
        }
        cout<<"Case "<<count<<": "<<x[person/2]<<endl;
        count++;
    }
 
    return 0;
}