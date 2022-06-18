#include <iostream>
 
using namespace std;
 
int main() {
 
    string str;
    unsigned long long mul;
    
    while(cin>>str && str != "0"){
        mul = 1;
        for(int i=0 ;i < str.length() ; i++){
            
            mul *= ( int(str[i]) -96 );
        }
        cout<<mul<<endl;
    }
 
    return 0;
}