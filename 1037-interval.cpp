#include <iostream>
 
using namespace std;
 
int main() {
 
    float a;
    cin>>a;
    
    if(a>=0 && a<=25.00){
        cout<<"Intervalo [0,25]"<<endl;
    }else if(a>=25.01 && a<=50){
        cout<<"Intervalo (25,50]"<<endl;
    }else if(a>=50.01 && a<=75){
        cout<<"Intervalo (50,75]"<<endl;
    }else if(a>=75.01 && a<=100){
        cout<<"Intervalo (75,100]"<<endl;
    }else{
        cout<<"Fora de intervalo"<<endl;
    }
 
    return 0;
}