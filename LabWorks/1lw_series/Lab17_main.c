#include <stdio.h>
#include <math.h>

void main(){
double x = 0, y = 0, a = 0, S = 0, f1 = 0;

printf("Suggest value of x, where F(x) = arctan(x):\n");
scanf(" %lf", &x);

y = atan (x) ;
printf ("y = arctan (%.2f ) = %.2f\n", x, y) ;

f1 = x / sqrt(1 + x * x);

a =  f1 * ( (1.) * x * x / (1.) * (1 + x * x) ) ; 
S = a ; //S = a0 ;
printf ("x = %.2f\t S = %8.2f\t = %8.2f\n" , x, a, atan(S)) ;

a = a * ( f1 * ( (2 * 1) * x * x * x * x / ( ((2 * 2) * pow(4,2) * (2 * 2 + 1)) * pow((1 + x * x),2)) ) ) ; 
S = S + a ; //S = S + a1 ;
printf ("x = %.2f\t S = %8.2f\t = %8.2f\n" , x, a , atan(S)) ;

a = a * ( f1 * ( (4 * 3 * 2) * x * x * x * x * x * x/ ( (pow(3 * 2,3) * pow(4,3) * (2 * 3 + 1)) * pow((1 + x * x),3)) ) ) ; 
S = S + a ; //S = S + a2 ;
printf ("x = %.2f\t S = %8.2f\t = %8.2f\n" , x, a , atan(S)) ;

a = a * ( f1 * ( (8 * 7 * 6 * 5 * 4 * 3 * 2) * x * x * x * x * x * x * x * x/ ( (pow(4 * 3 * 2,4) * pow(4,4) * (2 * 4 + 1)) * pow((1 + x * x),4)) ) ) ; 
S = S + a ; //S = S + a3 ;
printf ("x = %.2f\t S = %8.2f\t = %8.2f\n" , x, a , atan(S)) ;

printf ("\t                       500 \n", a);
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
