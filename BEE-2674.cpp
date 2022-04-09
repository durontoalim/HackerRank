#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int a,count = 0,t = 3,i;
    while(t--){
        scanf("%d", &a);
        for(i=2;i<a;i++){
            if(a%i==0){
                count++;
            }
        }
        if(count==0){
            printf("Super");
        }else if(count == 1){
            
        }
    }
 
    return 0;
}