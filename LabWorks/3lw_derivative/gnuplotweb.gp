# Scale font and line width (dpi) by changing the size! It will always display stretched.
set terminal svg size 400,300 enhanced fname 'arial'  fsize 10 butt solid
set output 'out.svg'

# Key means label...
set key inside bottom right
set xlabel 'x'
set ylabel 'f(x) and f^,(x)'
set title 'atan(x) and atan^,(x)'
set grid
plot "data.txt" using 1:2 title 'atan(x)' with lines, "data.txt" using 1:3 title 'atan^,(x)' with linespoints ,"data.txt" using 1:4 title 'atan^,(x)' with linespoints,"data.txt" using 1:5 title 'atan^,^,(x)' with linespoints,"data.txt" using 1:6 title 'atan^,^,(x)' with linespoints,
