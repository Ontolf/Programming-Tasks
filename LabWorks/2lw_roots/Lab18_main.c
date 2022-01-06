#include <stdio.h>
#include <math.h>

int main(){
    
    float a = 0, b = 0, c =0, x = 0, fa = 0, fb = 0, fx = 0, prec = 0;
    int r = 1;
    
    printf("Enter value of left border: \n" );
    scanf("%f", &a);
    printf("Enter value of right border: \n" );
    scanf("%f", &b);
    printf("Enter value of c wher f(x) = c: \n" );
    scanf("%f", &c);
    printf("Enter value of precision: \n" );
    scanf("%f", &prec);
    
    fa = atan(a); 
    fb = atan(b);
    
    printf(" Interval [%.2f;%.2f] where atan(x).\n", a, b);
        
    printf("From a, atan(%7.3f) = %7.3f.\n", a, fa);
    printf("From b, atan(%7.3f) = %7.3f.\n", b, fb);
    
    printf("inter\ta\tb\tx\tatan(x)\n");
    x = (a + b)/2;
    printf("%2d%10.5f%10.5f%10.5f%10.5f \n", r, a, b, x , atan(x));
    
    while( ( (b - a) > prec ) || ( (a - b) > prec ) ){
        r++;

         if(c >0){
            if(atan(x) < c ){
            a = x;
            fa = atan(x);
            } else {
            b = x;
            fb = atan(x);
            }
             
         } else {
            if(atan(x) > c ){
            b = x;
            fb = atan(x);
            } else {
            a = x;
            fa = atan(x);   
            }
         }
        x = (a + b)/2;
        printf("%2d%10.5f%10.5f%10.5f%10.5f\n", r, a, b, x , atan(x));
    }
    
}
