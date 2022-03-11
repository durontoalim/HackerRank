#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main() {
 
    int a,b;
    cin >> a>>b;
    float fuel_spent = (a/12.0)*b;
    cout<<fixed<<setprecision(3)<<fuel_spent<<endl;
 
    return 0;
}