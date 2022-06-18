#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int i,count,count2,count3,count4;
    string str;

    while(getline(cin,str)) {

        int len = str.length();
        int len2 = len;

            i = 0;
            count = 0;
            count2 = 0;
            count3 = 0;
            count4 = 0;

            while(len--){
                if(str[i] >=65 && str[i] <= 90){
                    count++;
                }
                if(str[i] >=97 && str[i] <= 122){
                    count2++;
                }
                if(str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9'){
                    count3++;
                }
                if(str[i] == ' '){
                    count4 = 1;
                }
                
                i++;
            }

            if(count>=1 && count2 >=1 && count3 >= 1 && count4 == 0 && len2>=6 && len2<=32){
                cout<<"Senha valida."<<endl;
            }
            else{
                cout<<"Senha invalida."<<endl;
            }
    }
 
    return 0;
}