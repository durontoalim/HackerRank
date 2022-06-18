#include <bits/stdc++.h>
 
using namespace std;
 
int main() {

    string var2,var3,var4;
    int count = 0,i;
    
        getline(cin,var2);
      
        getline(cin,var3);
        
        getline(cin,var4);

        cout<<var2<<var3<<var4<<endl;
        cout<<var3<<var4<<var2<<endl;
        cout<<var4<<var2<<var3<<endl;

        count = 0;
        for(i=0;i<var2.length() ; i++){
            cout<<var2[i];

            count++;
            if(count == 10) break;

        }
        count = 0;
        for(i=0;i<var3.length() ; i++){
            cout<<var3[i];
            count++;
            if(count == 10) break;
        }
        count = 0;
        for(i=0;i<var4.length() ; i++){
            cout<<var4[i];
            
            count++;
            if(count == 10) break;
        }
        cout<<endl;
 
    return 0;
}