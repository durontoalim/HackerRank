#include <iostream>
 
using namespace std;
 
int main() {
 
    int H1,M1,H2,M2,a,b;
    
    while(cin>>H1>>M1>>H2>>M2){
        if(H1 == 0 && H2 == 0 && M1 == 0 && M2 == 0){
            break;
        }
        if(H1<H2){
            a = (H1*60)+M1;
            b = (H2*60)+M2;
            cout<< b-a <<endl;
        }
        if(H1>H2){
            a = (H1*60)+M1;
            b =(24*60)+(H2*60)+M2;
            cout<<b-a<<endl;
        }
        if(H1==H2){
            if(M1<M2){
                a = M2-M1;
                cout<<a<<endl;
            }
            if(M1>M2){
                a = M1;
                b =(24*60)+M2;
                cout<<b-a<<endl;
            }
        }
    }
 
    return 0;
}