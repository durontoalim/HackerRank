#include <iostream>
 
using namespace std;
 
int main() {
 
    int X1,Y1,X2,Y2;
    
    while(cin>> X1>>Y1>>X2>>Y2 && X1 !=0 && X2 !=0 && Y1 !=0 && Y2 !=0){

        int absss= abs(X1-X2);
        int absss2= abs(Y1-Y2);

        if(X2==X1 && Y1==Y2){
            cout<<"0"<<endl;
        }
        else if(X1 == X2 || Y1 == Y2 || (X1 == X2)){
            cout<<"1"<<endl;
        }
        else if(absss-absss2 == 0){
            cout<<"1"<<endl;
        }
        else{
            cout<<"2"<<endl;
        }
    }
 
    return 0;
}