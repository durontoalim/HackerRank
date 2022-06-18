#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int N,count=1,t;
    double sum = 0.0,n,avg_day = 0, result = 0.0;
    cin>>N;
    int X = N;
    while(N--){
        t= 0;
        string str;
        cin>>n;

        getchar();

        getline(cin,str);

        for(int i= 0; str[i] != '\0' ; i++){
            if(str[i] == 32 ){
                t++;
            }
        }

        sum += n;

        result = (t+1) ;
        cout<<"day "<<count++<<": "<< floor(result) <<" kg"<<endl;
        
        avg_day += result;
    }
    
    cout<<fixed<<setprecision(2) << avg_day/X << " kg by day"<<endl;
    cout<<fixed<<setprecision(2)<< "R$ "<<sum/X <<" by day"<<endl;
 
    return 0;
}