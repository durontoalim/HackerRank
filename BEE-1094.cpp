#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int N,x,sum=0,sum2 = 0,sum3 =0,sum4=0,i;
    char y;
    cin>>N;
    
    for(i=0;i<N;i++){
        cin>>x>>y;
        sum += x;
        if(y=='C'){
            sum2 += x;
        }
        if(y=='R'){
            sum3 += x;
        }
        if(y=='S'){
            sum4 += x;
        }
    }
    cout<<"Total: "<<sum<<" cobaias"<<endl;

    cout<<"Total de coelhos: "<<sum2<<endl;
    float percent_coelhos = 100.00*sum2/sum;

    cout<<"Total de ratos: "<<sum3<<endl;
    float percent_ratos = 100.00*sum3/sum;

    cout<<"Total de sapos: "<<sum4<<endl;
    float percent_sapos = 100.00*sum4/sum;

    cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<percent_coelhos<<" %"<<endl;
    cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<percent_ratos<<" %"<<endl;
    cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<percent_sapos<<" %"<<endl;
 
    return 0;
}