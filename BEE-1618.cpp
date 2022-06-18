#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    cin>>n;
    int Ax,Ay,Bx,By,Cx,Cy,Dx,Dy,Rx,Ry;
    while(n--){
        cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy>>Dx>>Dy>>Rx>>Ry;
        if(Rx>=Ax && Rx <=Bx &&Rx<=Cx &&Rx>=Dx &&Ry>=Ay &&Ry>=By &&Ry <= Cy && Ry <= Dy){
            cout<<"1"<<endl;
        }else{
            cout<<"0"<<endl;
        }
    }
 
    return 0;
}