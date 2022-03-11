#include <iostream>
 
using namespace std;
 
int main() {

    int N;
    cin>> N;

    cout << N <<endl;
    cout << N/100<<" nota(s) de R$ 100,00"<<endl;

    int utin;
    utin = N%100;

    cout << utin/50<< " nota(s) de R$ 50,00"<<endl;
    utin = utin%50;

    cout << utin/20<<" nota(s) de R$ 20,00"<<endl;
    utin = utin%20;

    cout << utin/10<< " nota(s) de R$ 10,00"<<endl;
    utin = utin%10;

    cout << utin/5<<" nota(s) de R$ 5,00"<<endl;
    utin = utin%5;

    cout << utin/2<<" nota(s) de R$ 2,00"<<endl;
    utin = utin%2;

    cout << utin/1<<" nota(s) de R$ 1,00"<<endl;


    return 0;
}