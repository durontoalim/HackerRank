#include <bits/stdc++.h>
#include <string>
 
using namespace std;
 
int main() {
 
    int N,i;
    cin>>N;
    
    for(i=0;i<N;i++){
        char str[1000];

        scanf("%s", &str);
        int j, sum =0;
        for(j=0;j<strlen(str); j++){
            if(str[j] == '\0') break;
            else if(str[j] == '1'){
                sum += 2;
            }
            else if(str[j] == '2'){
                sum += 5;
            }
            else if(str[j] == '3'){
                sum += 5;
            }
            else if(str[j] == '4'){
                sum += 4;
            }
            else if(str[j] == '5'){
                sum += 5;
            }
            else if(str[j] == '6'){
                sum += 6;
            }
            else if(str[j] == '7'){
                sum += 3;
            }
            else if(str[j] == '8'){
                sum += 7;
            }
            else if(str[j] == '9'){
                sum += 6;
            }
            else if(str[j] == '0'){
                sum += 6;
            }
        }
        printf("%d leds\n", sum);
    }
 
    return 0;
}