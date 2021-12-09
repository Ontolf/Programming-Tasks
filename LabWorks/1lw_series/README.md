Lab17
Currently laboratory work which includes expression:
calculates successfully within Taylor’s method by previously set commands. Program includes integrated,
unchangeable graphical ASCII interface which shows expression and recurrence factor. Recurrence factor was
calculated, after written in the code.
As Taylor series can be repeated multiple times, the user can
choose the amount of cycles by adjusting the value to the variable
rep .

Gnuplot’s image:
Graphic representation of the equation was made with the
application Gnuplot. Where atan(f(x)) is purple line, atan(x) is
green line and f(x) = x / (3 * sqrt(1 + x*x)).

Code of the solution:
set xrange [-10:10]
set yrange [-10:10] Output of the program where x = 2.
f(x) = x/ (3 * sqrt(1 + x*x))
plot atan(f(x)), atan(x)


