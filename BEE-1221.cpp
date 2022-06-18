#include <bits/stdc++.h>
 
using namespace std;

 
int main() {
 
    int N;
    cin>>N;
    while(N--){

        long long T;

        cin>> T ;

        if(T == 0) cout<<"Not Prime"<<endl;
        
        if(T == 1) cout<<"Not Prime"<<endl;

        if(T == 2) cout<<"Prime"<<endl;

        if(T>2){

            int count = 1 ;
            for(int i=2; i < sqrt(T)+1; i++){
                if(T%i == 0){
                    count = 0;
                    break;
                }
            }

            if(count == 0){
                cout<<"Not Prime"<<endl;
            }
            else{
                cout<<"Prime"<<endl;
            }

        }

    }
 
    return 0;
}