#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    float a,sum,average,i;
    
    for(i=0;i<6;i++){
        cin>>a;
        if(a>0){
            sum+= 1;
            average += a;
        }
    }
    cout<<sum<<" valores positivos"<<endl;
    cout<<fixed<<setprecision(1)<<average/sum<<endl;
 
    return 0;
}