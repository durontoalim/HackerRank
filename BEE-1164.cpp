#include <iostream>
 
using namespace std;
 
int main() {
 
    int N,X,count,sum;
    cin>>N;
    while(N--){
        cin>>X;
        count = 0;
        sum = 0;
        for(int i= 1; i<=X/2; i++){
            sum += i;
            
            if(sum == X){
                count++;
            }
        }
        if(count == 0){
            cout<<X<<" nao eh perfeito"<<endl;
        }
        else{
            cout<<X<<" eh perfeito"<<endl;
        }
    }
 
    return 0;
}