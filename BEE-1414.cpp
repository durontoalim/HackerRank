#include <iostream>
 
using namespace std;
 
int main() {
 
    int T,N,P,i;
    string str;
    
    while(cin>>T>>N && T != 0){
        int total_point = 3*N;
        int match_point = 0;
        
        for(i=0;i< T; i++){
           cin>>str;
            cin>>P;
            match_point += P;
        }

        cout<<total_point - match_point<<endl;

    }
 
    return 0;
}