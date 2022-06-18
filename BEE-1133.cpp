#include <iostream>

using namespace std;
 
int main() {

    int X,Y,sum,temp;
    cin>>X>>Y;
    if(X>Y){
       temp = X;
        X = Y;
        Y = temp; 
    }
    
    
    for(int i=X;i<Y;i++){
        sum += i;
    }
    cout<<sum<<endl;
 
    return 0;
}