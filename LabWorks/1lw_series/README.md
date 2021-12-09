Lab17.  
Currently laboratory work which includes expression:  
![wqeqw](https://user-images.githubusercontent.com/89953755/145365239-8dcdd6c8-1892-4d13-b3ae-bb92a63080e0.jpg)

calculates successfully within Taylor’s method by previously set commands. Program includes integrated,
unchangeable graphical ASCII interface which shows expression and recurrence factor. Recurrence factor was
calculated, after written in the code.  
As Taylor series can be repeated multiple times, the user can
choose the amount of cycles by adjusting the value to the variable
rep .
![jhj](https://user-images.githubusercontent.com/89953755/145365277-adb2b1ef-3f5b-4412-a98e-020846a5ae46.jpg)  
Output of the program where x = 2.

Gnuplot’s image:  Graphic representation of the equation was made with the
application Gnuplot. Where atan(f(x)) is purple line, atan(x) is
green line and f(x) = x / (3 * sqrt(1 + x*x)).

Code of the solution:  
set xrange [-10:10]  
set yrange [-10:10]   
f(x) = x/ (3 * sqrt(1 + x*x))  
plot atan(f(x)), atan(x)

![unknown](https://user-images.githubusercontent.com/89953755/145365289-10ca8186-70e8-4022-bc32-ea521eca94e7.png)  
Gnuplot's image
