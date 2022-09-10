t=(0:pi/100:pi)';
y1=sin(t);
y2=-sin(t);
y3=sin(t).*sin(9*t);
t3=pi*(0:9)/9;
y4=sin(t3).*sin(9*t3);
hold on
plot(t,y1,'r:',t,y2,'-bo')
plot(t,y3,'-bo',t3,y4,'s')
plot(t3,y4,'s','markersize',10,'markeredgecolor',[0,1,0],'markerfacecolor',[1,0.8,0])
axis([0,pi,-1,1])
hold off
plot(t,y1,'r--',t,y2,'m-',t,y3,'-bo',t3,y4,'s','markersize',10,'markeredgecolor',[1,0,1],'markerfacecolo
r',[1,0.8,0])



