#include <stdio.h>
#include <math.h>

void main()
{
    float a = 0. , b = 5, x, step = 0.1, f11 = 0, f12 = 0, f21 = 0, f22 = 0, f112 = 0, f111= 0;
    
    printf("Choose value of a:\n");
    scanf("%f", &a);
    printf("Choose value of b:\n");
    scanf("%f", &b);
    printf("Choose value of step:\n");
    scanf("%f", &step);
    
    printf(" #\tx\t atan(x) \tatan\'(x)\tatan\'(x)\tatan\'\'(x)\tatan\'\'(x) \n");
    x = a;
    while(x < b){
        
        f11 = 1/(pow(x,2) + 1);
        f12 =  (atan(x + step) - atan(x))/step;
        
        f21 = (-2 * (x))/( pow(x,4) +2 * pow(x,2) + 1 );
        
        f111 = 1/(pow(x + step,2) + 1);
        f112 = 1/(pow(x,2) + 1);
        f22 = (f111 - f112)/step;
        
        printf(" %10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\n", x, atan(x), f11, f12, f21, f22); 

        
        x += step;
    }
}
