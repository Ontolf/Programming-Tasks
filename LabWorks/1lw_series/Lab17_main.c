#include <stdio.h>
#include <math.h>

 float equation( float x){
    long double a = 0, a1 = 0, S = 0, eq = 0, eq2 = 0, step = 0;
    int k = 0;
    
    eq = x / sqrt(1 + x*x);
    eq2 = x*x/ (1 + x*x);

    a = 1.;
    S += a;
    
    while(k < 1000){
        //printf("%d\t%f\t%f\t%f\n", k, x, a, S);
        k += 1;
        step = 1. * (2*k - 2)/(2*k + 1);
        step += 1./(4*k*k + 2*k);
        a = a * eq2 * step;
        S += a;

    }
    
    return S*eq;
}

int main()
{
float x = 0, y = 0;

printf("Enter value of x where f(x) = arctan(x)\n");
scanf(" %f", &x);

y = atan(x);
printf("arctan(x) = %f \n", y);

printf("Final result is: %f\n", equation(x));

printf(" \n");
printf(" \n");
printf ("\t                       500 \n");
printf("\t                       ————————   \n");
printf(" \t                       \\                                                    2   k            \n");
printf(" \t            x           \\                          (2 * k)!            /   x  \\             \n");
printf("arctan(%.2f) =   ——————   *     >           ————————————————————————————  *  |———————|        \n", x);
printf(" \t           _____        /                      2    k                  \\    2 /              \n");
printf(" \t          /    2       /                   (k!)  * 4  * (2 * k +1)       1+x                  \n");
printf("\t        \\/1 + x       ————————   \n"); 
printf("\t                       k = 0     \n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                   2                 \n");
printf("                     (2k - 1)(2k-1)          /   x  \\                 \n");
printf("recurrence factor: ——————————————————  *     |———————|            \n");
printf(" \t                  2k(2k+1)            \\    2/              \n");        
printf("                                                1+x                 \n");
}
