#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    double V,D,r,height,area;
    
    while(cin>>V>>D){
        r = D/2;
        
        area = 3.14*r*r;

        height = V/(3.14*r*r);
        
        cout<<"ALTURA = "<< fixed << setprecision(2)<<height<<endl;
        cout<<"AREA = "<< fixed << setprecision(2)<<area<<endl;
    }
 
    return 0;
}