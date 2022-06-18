#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
 
using namespace std;
 
int main() {
 
    int N,i;
    char encryp_text[1001],copy[1001];

    cin>>N;
    getchar();
    
    while(N--){

        gets(encryp_text);

        int len = strlen(encryp_text);
        int t = 0;

        for(i=0;i<len; i++){
            if( (encryp_text[i] >= 'A') && (encryp_text[i] <= 'Z') || (encryp_text[i] >= 'a') && (encryp_text[i] <= 'z') ){
                encryp_text[i] += 3;
            }
        }
        for(i=len -1; i>=0; --i){
            copy[t++] = encryp_text[i];
        }

        for(i=len/2; i<len; i++){
            copy[i] -= 1;
        }

        for(i=0;i<len;i++){
            cout<<copy[i];
        }

        cout<<endl;
    }
 
    return 0;
}