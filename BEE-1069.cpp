#include <iostream>
 
using namespace std;
 
int main() {
 
    int N;
    cin>>N;
    
    while(N--){
        int count = 0, count2 = 0;
        string str;
        cin>>str;
        
        int len = str.length();
        
        for(int i=0; i< len ; i++){
            if(str[i] == '<'){
                count++;
            }
            if(str[i] == '>'){
                count2++;
            }
        }
        if(count == count2) cout<<count<<endl;
        
        if(count<count2){
            cout<<count<<endl;
        }
        if(count>count2){
            cout<<count2<<endl;
        }
    }
    return 0;
}