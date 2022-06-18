#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int N,alemanha,brazil;
    float avg;
    
    while(cin>>N && N != 0){
        avg = N/90.00;
        brazil = avg;

        alemanha = ceil(avg*7);
        
        cout<<"Brasil "<<brazil<<" x Alemanha "<<alemanha<<endl;
    }
 
    return 0;
}