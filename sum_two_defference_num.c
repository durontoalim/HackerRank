#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int number, number2;
    float float_number, float_number2;

    scanf("%d %d", &number, &number2 );
    
    scanf("%f %f", &float_number, &float_number2 );
    
    
    printf("%d %d\n",number+number2, number-number2);
    printf("%.1f %.1f", float_number+float_number2, float_number-float_number2);
    
    
    return 0;
}