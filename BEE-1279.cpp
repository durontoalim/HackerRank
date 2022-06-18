#include <bits/stdc++.h>
 
using namespace std;

int modular(string str,int mod ){
        int N = 0,i;
        for(i=0; i<str.length() ; i++){
            N =( N*10 + (int(str[i]) - 48) ) % mod;
        }

        return N;
    }
 
int main() {
 
    string str;
    int leap_year,count,EOL=0;

    while(getline(cin,str)){


        int mod_4 = modular(str,4);
        int mod_100 = modular(str,100);
        int mod_400 = modular(str,400);
        int mod_15 = modular(str,15);
        int mod_55 = modular(str,55);

        count = 0;
        leap_year = 0;

        if(EOL == 1){
            cout<<endl;
        }

        if( (mod_4== 0 && mod_100 != 0) || mod_400 == 0){

            cout<<"This is leap year."<<endl;
            count = 1;
            leap_year = 1;
        }
        if(mod_15 == 0){
            cout<<"This is huluculu festival year."<<endl;

            count = 1;
        }
        if(mod_55 == 0 && leap_year == 1){
            cout<<"This is bulukulu festival year."<<endl;
        }
        if(count == 0){
            cout<<"This is an ordinary year."<<endl;
        }

        EOL = 1;

    }
 
    return 0;
}