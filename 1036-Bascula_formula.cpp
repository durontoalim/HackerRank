#include <iostream>
#include <cmath>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double A,B,C,X1,X2;
    
    cin>> A>>B>>C;

    double square = ( (B*B) -4*A*C);
    
    X1=(-B + sqrt(square) ) / (2*A);
    X2=(-B - sqrt(square) ) / (2*A);

    if(square<0 || X1 == 0 || X2 == 0 || A==0){
        cout<<"Impossivel calcular"<<endl;
    }else{
        cout<<fixed<<setprecision(5)<<"R1 = "<<X1<<endl;
        cout<<fixed<<setprecision(5)<<"R2 = "<<X2<<endl;
    }

    

 
    return 0;
}