#include <iostream>
#include <cmath>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    float A,B,C,Perimetro,Area;
    cin>>A>>B>>C;
    
    if(A<B+C && B<A+C && C<A+B){
        Perimetro = A+B+C;
        cout<<fixed<<setprecision(1)<<"Perimetro = "<<Perimetro<<endl;
    }else{
        Area = ((A+B)/2)*C;
        cout<<fixed<<setprecision(1)<<"Area = "<<Area<<endl;  
    }
 
    return 0;
}