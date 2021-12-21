#include <stdio.h>
#include <math.h>

int main(){
    
    float a = 0, b = 0, c =0, x = 0, fa = 0, fb = 0, fx = 0, br = 0;
    int r = 1;
    
    printf("Enter value of left border\n" );
    scanf("%f", &a);
    printf("Enter value of right border\n" );
    scanf("%f", &b);
    printf("Enter value of c wher f(x) = c\n" );
    scanf("%f", &c);
    printf("Enter value of min borders distance \n" );
    scanf("%f", &br);
    
    fa = atan(a); 
    fb = atan(b);
    
    printf(" interval [%.2f;%.2f] where atan(x)\n", a, b);
        
    printf("from a, atan(%7.3f) = %7.3f\n", a, atan(a));
    printf("from b, atan(%7.3f) = %7.3f\n", b, atan(b));
    
    printf("count\ta\tb\tx\tatan(x)\tatan(c)\n");
    x = (a + b)/2;
    printf("%d%10.5f%10.5f%10.5f%10.5f%10.5f \n", r, a, b, x , atan(x), atan(c));
    
    while( ( (b - a) > br ) || ( (a - b) > br ) ){
        r++;
         // printf("%10.5f%10.5f\n", atan(a),atan(b));
        if(atan(x) < c ){
        a = x;
        fa = atan(x);
        } else {
        b = x;
        fb = atan(x);
        }
        x = (a + b)/2;
        printf("%d%10.5f%10.5f%10.5f%10.5f%10.5f\n", r, a, b, c , atan(x));
    }
}
