#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int coin_input;

    cin>> coin_input;

    int hundred = coin_input/100;
    int fifty = (coin_input%100)/50;
    int twinty =(coin_input%50)/20;
    int ten = (twinty%20)/10;
    int five = ten/5;
    int one = five/1;

    cout<<"NOTAS:"<<endl;
    cout<< hundred<<" nota(s) de R$ 100.00"<<endl;
    cout<< fifty<<" nota(s) de R$ 50.00"<<endl;
    cout<< twinty<<" nota(s) de R$ 20.00"<<endl;
    cout<< ten<<" nota(s) de R$ 10.00"<<endl;
    cout<< five<<" nota(s) de R$ 5.00"<<endl;


    cout<< one<<" nota(s) de R$ 1.00"<<endl;




    return 0;
}