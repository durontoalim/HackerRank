#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int i,j,k,l;
    char O[2];
    cin>>O;
    double M[12][12];
    double sum=0.0;

    for(i=0;i<12 ;i++){
        for(j=0;j<12;j++){
            cin>>M[i][j];
        }
    }
    for(k=1;k<12;k++){
        for(l=0;l<k;l++){
           sum += M[k][l]; 
        }
    }
    if(O[0] == 'S'){
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }else if(O[0] == 'M'){
        cout<<fixed<<setprecision(1)<<sum/66.0<<endl;
    }
    return 0;
}