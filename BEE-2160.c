#include <stdio.h>
#include <string.h>
 
int main() {
 
    char str[600];
    
    gets(str);
    
    if(strlen(str)<=80){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
 
    return 0;
}