#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main() {
 
    float x;

    cin>>x;
    
	float salary = x+x*15/100;
    float modulus = x*15/100;

   float modulus2 = x*12/100;
   float salary2 = x+modulus2;

   float modulus3 = x*10/100;
   float salary3 = x+modulus3;

   float modulus4 = x*7/100;
   float salary4 = x+modulus4;
   
   float modulus5 = x*4/100;
   float salary5 = x+modulus5;
    
    if(x>=0 && x<=400){

        cout<<"Novo salario: "<<fixed<<setprecision(2)<<salary<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<modulus<<endl;
        cout<<"Em percentual: 15 %"<<endl;
    }

   else if(x>=400.01 && x<=800.00){
       
       cout<<"Novo salario: "<<fixed<<setprecision(2)<<salary2<<endl;
       cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<modulus2<<endl;
       cout<<"Em percentual: 12 %"<<endl;
   }else if(x>=800.01 && x<=1200){
       cout<<"Novo salario: "<<fixed<<setprecision(2)<<salary3<<endl;
       cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<modulus3<<endl;
       cout<<"Em percentual: 10 %"<<endl;

   }else if(x>=1200.01 && x<=2000){
      
       cout<<"Novo salario: "<<fixed<<setprecision(2)<<salary4<<endl;
       cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<modulus4<<endl;
       cout<<"Em percentual: 7 %"<<endl;
   }else if(2000.01<=x){
      
       cout<<"Novo salario: "<<fixed<<setprecision(2)<<salary5<<endl;
       cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<modulus5<<endl;
       cout<<"Em percentual: 4 %"<<fixed<<setprecision(2)<<endl;
   }

 
    return 0;
}
