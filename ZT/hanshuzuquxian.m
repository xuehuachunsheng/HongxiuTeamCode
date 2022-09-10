syms x y t
y1=exp(2*x*sin(2*x));
y2=x^2-x^4;
f3=log(abs(sin(x)+cos(y)));
X=exp(t).*cos(t);
Y=exp(t).*sin(t);
f5=abs(exp(2*x));
subplot(2,3,1),fplot(y1,[-pi pi])
subplot(2,3,2),fplot(y2)
subplot(2,3,3),fimplicit(f3,[-pi pi 0 2*pi])%定义隐函数
subplot(2,3,4),fplot(X,Y,[-4*pi 4*pi])
subplot(2,3,5),fplot(f5)
hold on 
x=linspace(-pi,pi,200);
plot(x);
ylim([-5 5])
hold off
