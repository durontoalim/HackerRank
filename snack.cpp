#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    int X,Y;
    cin>> X>>Y;
    
    if(X == 1){
        float X = X;
        X=4.00;
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<(float)X*Y<<endl;
    }else if(X == 2){
        float X = X;
        X=4.50;
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<(float)X*Y<<endl;
    }else if(X == 3){
        float X = X;
        X=5.00;
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<(float)X*Y<<endl;
    }else if(X == 4){
        float X = X;
        X=2.00;
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<(float)X*Y<<endl;
    }else if(X == 5){
        float X = X;
        X=1.50;
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<(float)X*Y<<endl;
    }

    return 0;
}