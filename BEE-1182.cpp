#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int L,i,j,k;
    char T[2];
    cin>>L>>T;
    double M[12][12];
    double sum=0.0;

    for(i=0;i<12 ;i++){
        for(j=0;j<12;j++){
            cin>>M[i][j];
        }
    }
    for(k=0;k<12;k++){
        sum += M[k][L];
    }
    if(T[0] == 'S'){
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }else if(T[0] == 'M'){
        cout<<fixed<<setprecision(1)<<sum/12.0<<endl;
    }
    return 0;
}