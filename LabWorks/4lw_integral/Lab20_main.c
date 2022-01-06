#include <stdio.h>
#include <math.h>

void main()
{
 float a = 0, b = 0, prec = 0, n = 2, fr[2], ft[2], fs[2], w = 0;
 int k = 0;
 
 printf("Choose a value of precision (float): \n");
 scanf(" %f", &prec);
 printf("Choose a value of a (float): \n");
 scanf(" %f", &a);
 printf("Choose a value of b (float): \n");
 scanf(" %f", &b);
 
 w = (b - a)/n;
 
 fr[1] = 0; fr[0] = w * atan(a + (0.5 + k)*w);
 ft[1] = 0; ft[0] = w * ((atan(a) + atan(b))/n);
 fs[1] = 0; fs[0] = w * (atan(a)/2 + atan(a + (b - a)/2) + atan(b)/2);
 
  while(fabs(fr[1] - fr[0]) > prec){
     fr[1] = fr[0];
     n = n * 2;
     fr[0] = 0;
     k = 0;
     while(k < n){
         
         w = (b - a)/n;
         
         fr[0] += w * atan(a + (0.5 + k)*w);
         k++;
     }
 }
 n = 2;
 
  while(fabs(ft[1] - ft[0])> prec){
     
     ft[1] = ft[0];
     n = n * 2;
     ft[0] = 0;
     k = 0;
     
     w = (b - a)/n;
     while(k < n){

         ft[0] += w * (atan(a + k*w) + atan(a + (k + 1)*w)/n);
         k++;
     }

 }
 n = 2;

  while(fabs(fs[1] - fs[0]) > prec){
     
     fs[1] = fs[0];
     n = n * 2;
     w = (b - a)/n;

     fs[0] =w*(atan(a)/2 + atan(b)/2);
     k = 1;
     
     while(k < n - 1){
         
         fs[0] += w * atan(a + k * w);
         k++;
     }
     
 }
 
 printf(" Rectangle rule: %f\n", fr[0]);
 printf(" Trapezoidal rule: %f\n", ft[0]);
 printf(" Simpsons rule: %f\n", fs[0]);
}
