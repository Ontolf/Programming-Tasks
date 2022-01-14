#include <stdio.h>
#include <math.h>

 double equation( long double x){
    long double a = 0, a1 = 0, S = 0, eq = 0, eq2 = 0, fact1 = 2, fact2 = 1;
    int i = 1, j = 1, k = 0;
    
    eq = x / sqrt(1 + x*x);
    eq2 = x*x/ (1 + x*x);

    a = eq/3;
    S = a;
    printf("%2d  %Lf\t%Lf\t%Lf\n", k, x, a, S);
    
    while(k < 500){
        k += 1;
        // Upper part where (2 * k)!
        for( i = 1; i <= k; i++){
            fact1 *= i; 
        }
        i = 1;
        // Lower part where (k!)^2
        for( j = 1; j <= k; j++){
             fact2 *= j;
        }
        j = 1;
        fact2 = fact2 * fact2;
        // Final calculation:
        a1 = (fact1/( fact2 * pow(4, k) * (2 * k + 1) )) * pow(eq2, k);
        printf("%Lf\t%Lf\t%Lf\n", a, eq, a1);
        a = a * eq * a1;
        S += a;
        printf("%2d  %Lf\t%Lf\t%Lf\n", k, x, a, S);
        fact2 = 1;
        fact1 = 2;
    }
    
    return S;
}

int main()
{
float x = 0, y = 0;

printf("Enter value of x where f(x) = arctan(x)\n");
scanf(" %f", &x);

y = atan(x);
printf("arctan(x) = %f \n", y);

equation(x);
    
printf(" y = equation(%lf) = %lf\n", x, yy);
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
printf("                                  5                    \n");
printf("                                 x                     \n");
printf("recurrence factor: ——————————————————————————————————  \n");
printf(" \t                                      _____         \n");
printf(" \t                                     /    2         \n");
printf("\t                (2k) * (2k + 1) * 2\\/1 + x          \n"); 
}
