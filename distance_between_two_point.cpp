#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main() {
 
    double x1,y1;
    cin >> x1>>y1;
    double x2,y2;
    cin >>x2>>y2;
    
    double distance;
    distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout<<fixed<<setprecision(4)<<distance<<endl;
 
    return 0;
}