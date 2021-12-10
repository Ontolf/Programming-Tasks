#include <stdio.h>
#include <math.h>

int main(){
    
    float a = 0, b = 0, c =0, x = 0, fa = 0, fb = 0, fx = 0;
    int r = 0;
    
    printf("Enter value of left border\n" );
    scanf("%f", &a);
    printf("Enter value of right border\n" );
    scanf("%f", &b);
    printf("Enter value of c wher f(x) = c\n" );
    scanf("%f", &c);
    
    fa = atan(a); 
    fb = atan(b);
    
    printf(" interval [%.2f;%.2f] where atan(x)\n", a, b);
        
    printf("from a, atan(%7.3f) = %7.3f\n", a, atan(a));
    printf("from b, atan(%7.3f) = %7.3f\n", b, atan(b));
    
    printf("count\ta\tb\tx\tatan(x)\n");
    while((b - a) > c){
        
        r++;
        x = (a + b)/2;
        
        printf("%d%10.5f%10.5f%10.5f%10.5f\n", r, a, b, x , atan(x));
        
        if(fa*atan(x) > 0){
        a = x;
        fa = atan(x);
        } else {
        b = x;
        fb = atan(x);
        }
    }
}
