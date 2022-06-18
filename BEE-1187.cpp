#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    char O[2];
    double sum = 0.0;
    double M[12][12];
    
    cin>> O;
    for(int i =0; i<12;i++){
        for(int j=0; j<12;j++){
            cin>>M[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=1+i;j<11-i;j++){
            sum += M[i][j];
        }
    }
    if(O[0] == 'S'){
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }
    else if(O[0] == 'M'){
        cout<<fixed<<setprecision(1)<<sum/30.00<<endl;
    }
    return 0;
}