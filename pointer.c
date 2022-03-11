#include <stdio.h>
#include <stdlib.h>
#include <cmath>

// void update(int *a,int *b) {
//     cin >> &a >> &b;
    
    
// }

int main() {
    
    int a, b,*x,*y,sum, subs;

    scanf("%d\n %d", &a,&b);
    
    x = &a;
    y = &b;
    
    sum = *x + *y;
    subs = abs(*x - *y);
    
    printf("%d\n%d", sum,subs);
    
    

    return 0;
}
