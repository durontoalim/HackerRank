#include <iostream>
 
using namespace std;
 
int main() {
 
    int T,x,i,j,F,sum;
    long long int N[60];

    cin>>T;

    N[0] = 0;
    N[1] = 1;

    for(j=2; j<=60;j++){
        N[j] = N[j-2] + N[j-1];
    }


    for(i=0;i<T;i++){
        cin>>x;
        cout<<"Fib("<<x<<") = "<<N[x]<<endl;
    }

    return 0;
}