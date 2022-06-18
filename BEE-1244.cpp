#include <iostream>
 
using namespace std;
 
int main() {
 
    string str;
    int N,arr[50];
    cin>>N;
    while(N--){
        getline(cin, str);
        // assigne length len varible
        int len = str.length();
        int count = 0;
        for(int i=0; i<= len; i++){
            
            if(str[i] == ' '){
                arr[count] = i;
                count++;

                cout<<i<<endl;
            }
            
        }
    }
 
    return 0;
}