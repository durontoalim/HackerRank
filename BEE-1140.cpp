#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    char N[50];

    while(gets(N) ){

        char find[] = "tautogram";

        if(strstr(N,find)){
            cout<<"Y"<<endl;
        }
        else{
            cout<<"N"<<endl;
        }
    }
 
    return 0;
}