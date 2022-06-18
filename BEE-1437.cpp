#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int N,i,count;


    while(cin>>N && N != 0){

        string ch;

        cin>>ch;

        count = 1;

        for(i=0; i<ch.length(); i++){

            if(ch[i] == 'D'){
                count++;
                if(count>4){
                    count = 1;
                }
            }
            else if(ch[i] == 'E'){
                count--;
                if(count == 0){
                    count = 4;
                }
            }
        }

        if(count == 1){
            cout<<"N"<<endl;
        }
        if(count == 2){
            cout<<"L"<<endl;
        }
        if(count == 3){
            cout<<"S"<<endl;
        }
        if(count == 4){
            cout<<"O"<<endl;
        }
    }
 
    return 0;
}