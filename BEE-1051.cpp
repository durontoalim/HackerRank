#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    float n;
    cin>>n;
    
    if(n<=2000.00){
        cout<<"Isento"<<endl;
    }else if(n>=2000.01 && n<=3000.00){
        cout<<fixed<<setprecision(2)<<"R$ "<<(n-2000)*.08<<endl;
    }else if(n>=3000.01 && n<=4500.00){
        cout<<fixed<<setprecision(2)<<"R$ "<<(1000*.08)+(n-3000)*0.18<<endl;
    }else{
        cout<<fixed<<setprecision(2)<<"R$ "<<(1000*.08)+(1500*0.18)+(n-4500)*.28<<endl;
    }
 
    return 0;
}