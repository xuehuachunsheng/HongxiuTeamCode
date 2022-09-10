syms x
x=0:0.01*pi:pi/2;
y=log(x)+sin(x+pi./5);
subplot(2,2,1),polarplot(x,y)
subplot(2,2,2),loglog(x,y)
subplot(2,2,3),semilogx(x,y)
subplot(2,2,4),plot(x,y)
