x=-pi:pi/10:pi;
y1=exp(sin(x));
y2=exp(cos(x));
y3=exp(sin(x)+cos(x));
y4=exp(sin(x)-cos(x));
y5=0.2*exp(sin(x).*cos(x));
y6=0.2*exp(sin(x)./cos(x));
plot(x,y1,'b--',x,y2,'d-',x,y3,'m>-.',x,y4,'rh-',x,y5,'kh-',x,y6,'bh-')