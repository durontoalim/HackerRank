#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int count = 0,i,j;
    char N1[i];
    char N2[j];
    while(cin>>N1>>N2){
        j = 0;
        for(i=0; i<strlen(N2); i++){
                count = 0;
                if(j == strlen(N1)) j = 0;
                if(N1[i] == N2[j++]){
                    count++;
                }
        }

        cout<<count<<endl;
        
    }
 
    return 0;
}