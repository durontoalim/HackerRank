#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--){
        char arr[100];

        getchar();
        fgets(arr, sizeof(arr), stdin);
        
        printf("I am Toorg!\n");
    }
    return 0;
}