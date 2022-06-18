#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int t=0;
    float n,arr[3],X;

    while(1){
        while(1){
            cin>>n;
            if(n>=0 && n<=10){
                arr[t++]= n;
            }else{
                cout<<"nota invalida"<<endl;
            }
            if(t>1){
                break;
            }
        }
        float result = (arr[0]+arr[1])/2;
        cout<<"media = "<<fixed<<setprecision(2)<<result<<endl;
        t=0;
        while(1){
            cin>>X;
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
            if(X == 1 || X == 2){
                break;
            }
        }
        if(X == 1){
            continue;
        }else{
            break;
        }
    }
 
    return 0;
}