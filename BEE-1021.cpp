#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main() {
 
    float N;
    cin>>N;
    cout<<"NOTAS:"<<endl;
    float hun = (N/100);
    float fifty = (N%100) /50;
    float twinty = (N%50) /20;
    float ten = (N%20) / 10;
    float five = (N%10) /5;
    float two = (N%5) /2;
    float one = (N%2) /1;


    cout<<fixed<<setprecision(2)<<hun<<"nota(s) de R$ 100.00"<<endl;
    cout<<fixed<<setprecision(2)<<fifty<<"nota(s) de R$ 50.00"<<endl;
    cout<<fixed<<setprecision(2)<<twinty<<"nota(s) de R$ 2.00"<<endl;
    cout<<fixed<<setprecision(2)<<ten<<"nota(s) de R$ 10.00"<<endl;
    cout<<fixed<<setprecision(2)<<five<<"nota(s) de R$ 5.00"<<endl;
    cout<<fixed<<setprecision(2)<<two<<"nota(s) de R$ 2.00"<<endl;
    cout<<fixed<<setprecision(2)<<one<<"nota(s) de R$ 1.00"<<endl;
 
    return 0;
}