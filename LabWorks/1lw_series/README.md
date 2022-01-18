Lab17.  
Currently laboratory work which includes expression:  
![wqeqw](https://user-images.githubusercontent.com/89953755/145365239-8dcdd6c8-1892-4d13-b3ae-bb92a63080e0.jpg)

calculates successfully within Taylor’s method by previously set commands. Recurrence factor was
calculated, after written in the code.  
  
![sfsfs](https://user-images.githubusercontent.com/89953755/149905922-107d904e-2411-4d8b-a953-169a95804bf4.png)  
Output of the program where x = 100.  

Gnuplot’s image:
  
Code of the solution:
  
set key inside bottom right  
set xlabel 'x'  
set ylabel 'y'  
set title 'Some Data'  
S0(x) = x/sqrt(1+x*x) * 1  
S1(x)=  x/sqrt(1+x*x) * (1 +  2*x*x/((4*3)*(1+x*x)))  
plot [-20:20] atan(x), S0(x), S1(x)  
  
![2121](https://user-images.githubusercontent.com/89953755/149910189-d1e0639b-3b66-42ad-a886-d84f7032c0d4.png)  

Gnuplot's image
