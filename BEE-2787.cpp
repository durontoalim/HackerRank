#include <iostream>

using namespace std;

int main()
{
    int a,b,x;
    cin>> a;
    cin>> b;

    x = a+b;

    if(x%2 == 0) cout<< "1";
    if(x%2 == 1) cout<< "0";


    return 0;
}