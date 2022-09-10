t=0:0.01:4*pi;
r=abs(sin(t).*cos(t));
polarplot(t,r)%t是弧度，r是半径值