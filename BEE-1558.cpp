#include <bits/stdc++.h>
 
using namespace std;

int main() {
 
    int N,result,x,y;
    while(cin>>N){
        y=0;
        x = sqrt(N);
        bool col = false;
        while(x>=y){
            result = pow(y,2) + pow(x,2);
            if(result == N){
                col = true;
                break;
            }
            else if(result <N){
                y++;
            }
            else{
                x--;
            }
        }

        if(col){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
 
    }
    
    return 0;
}