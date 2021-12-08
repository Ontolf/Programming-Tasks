
#include <stdio.h>
#include <math.h>

double equation(double x){
    double a = 0, S = 0, cnt = 0, f1 = 0, f2 = 0, f12 = 1, f22 = 1, e1 = 0, e2 = 0, e3 = 0, rep = 0;
    
    printf("Enter amount of cycles\n");
    scanf(" %lf", &rep);

    a = x/ (3 * sqrt(1 + x*x));
    S = a;
    printf("%.2f\t%8.2f\t%8.2f\n", x, a, S);
    
    e1 = x/(sqrt(1 + x*x));
    e2 = x*x/(1+x*x);
    
    while(cnt < rep){
        cnt++;
        f12 = 1;
        f22 = 1;
        f1 = 2 * cnt;
        f2 = cnt;
        for(int i = 1; i <= f1; i++){
            f12 =  f12 * i;
        }
        for(int j = 1; j <= f2; j++){
             f22 = f22 * j;
        }
        e3 = f12/( pow(f22,2)*pow(4,cnt)*(2*cnt+1) );
        a = e1 *( e3 *pow(e2,cnt) );
        S = S + a;
        printf("%.2f\t%8.2f\t%8.2f\n", x, a, S);
    }

    return(S);
}

int main()
{

double x = 0, y = 0, yy = 0;

printf("Enter value of x where f(x) = arcta(x)\n");
scanf(" %lf", &x);

y = atan(x);
printf("arcant x = %lf\n", y);

yy = equation(x);

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
