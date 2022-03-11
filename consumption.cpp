#include <iostream>
#include <cmath>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int X;
    float Y;
    cin >> X>>Y;
    float con = X/Y;
    cout <<fixed <<setprecision(3)<< con<<" km/l" << endl;
    
 
    return 0;
}