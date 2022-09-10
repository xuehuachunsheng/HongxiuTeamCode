syms x%定义符号变量x
subplot(1,2,1),fplot(@(x)exp(x),[-pi,pi]);
subplot(1,2,2),fplot(@(x)sin(2*x)+cos(x),[-pi,pi]);