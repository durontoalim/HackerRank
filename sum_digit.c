#include <stdio.h>
int main()
{

    int a,sum;
    scanf("%d", &a);

    for(int i=a ;i != 0; i /= 10){
        sum += (i%10);
    }
    printf("%d",sum);
    return 0;
}