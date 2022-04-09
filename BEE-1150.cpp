#include <iostream>
 
using namespace std;
 
int main() {
    
    int x,y,i,sum=0,count = 1;

    cin >> x >> y;
    while(x>=y){
        cin>>y;
    }
    for(i=x;i<=y;i++){
        sum += i;
        if(sum > y){
            break;
        }
        count++;
    }
    cout<<count<<endl;
    
    return 0;
}