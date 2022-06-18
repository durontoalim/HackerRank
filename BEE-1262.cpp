#include <bits/stdc++.h>

using namespace std;

int main() {

    char RW[51];
    int P,count,i;
    
    while(cin>>RW>>P){
        count = 0;
        i =0;

        int len = strlen(RW);
        
        while(i<len){

            if(RW[i] == 'W'){
                count += 1;
                i++;
            }
            else{

                int counter =0;
                while(counter < P && RW[i] == 'R'){
                    counter++;
                    i++;
                }
                count++;
            }
        }

        cout<<count<<endl;
    }
 
    return 0;
}