syms x
subplot(1,2,1),fplot(@(x)exp(2*x),[-pi,pi])
subplot(1,2,2),fplot(@(x)sin(2*x),[-pi,pi])

