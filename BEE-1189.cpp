#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    
    int i,j,k,l,t=5,count=6;
    char O[2];
    double sum = 0.0,sum2=0.0;
    double M[12][12];
    
    cin>> O;
    for(i =0; i<12;i++){
        for(j=0; j<12;j++){
            cin>>M[i][j];
        }
    }
    for(k=1;k<11;k++){
        if(k==6) break;
        for(l=0;l<k;l++){
            sum += M[k][l];
        }
    }
    for(k=6;k<11;k++){
        for(l=0;l<t;l++){
            sum2 += M[k][l];
        }
        t--;
    }
    if(O[0] == 'S'){
        cout<<fixed<<setprecision(1)<<sum+sum2<<endl;
    }
    else if(O[0] == 'M'){
        cout<<fixed<<setprecision(1)<<(sum+sum2)/30.00<<endl;
    }
    return 0;
}