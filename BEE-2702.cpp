#include <bits/stdc++.h>

using namespace std;
 
int main() {
 
    int x,y,z,a,b,c,sum = 0;
    cin>>x>>y>>z;
    cin>>a>>b>>c;

    if(a>x){
        sum += a-x;
    }
    if(b>y){
        sum += b-y;
    }
    if(c>z){
        sum += c-z;
    }
    cout<<sum<<endl;
 
    return 0;
}