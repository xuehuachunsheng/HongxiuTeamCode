syms x
x=linspace(-2*pi,2*pi,200);
y1=exp(-x).*cos(4*x*pi);
y2=2*exp(-0.5*x).*cos(2*pi*x);
yyaxis left
plot(x,y1)
plot(x,y2)
yyaxis right
plot(x,y1)
plot(x,y2)
ylim([-40 60])
