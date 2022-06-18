#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    
    int i,j,k,l,t=5,count=6;
    char O[2];
    double sum = 0.0;
    double M[12][12];
    
    cin>> O;
    for(i =0; i<12;i++){
        for(j=0; j<12;j++){
            cin>>M[i][j];
        }
    }
    for(k=7;k<12;k++){
        for(l=t;l<=count;l++){
            sum += M[k][l];
        }
        t--;
        count++;
    }
    if(O[0] == 'S'){
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }
    else if(O[0] == 'M'){
        cout<<fixed<<setprecision(1)<<sum/30.00<<endl;
    }
    return 0;
}