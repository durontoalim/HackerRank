#include <iostream>
#include <cstdio>
using namespace std;

int myfunc(int a, int b, int c, int d){

        if(a>b && a>c&& a>d){
            cout<< a;
            return(a);
        } else if(b>c){
            cout << b;
            return(b);
        } else if(c>d){
            cout<< c;
            return(c);
        } else {
            cout<< d;
            return(d);
        }
    }
int main() {

    int a,b,c,d,fun;
    cin >>a>>b>>c>>d;
    fun = myfunc(a,b,c,d);
}