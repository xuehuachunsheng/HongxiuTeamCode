x=linspace(0.01,0.02,50);%将区间【0.01，0.02】等分为50份
y=sin(1./x);
subplot(2,1,1),plot(x,y)
subplot(2,1,2),fplot(@(x)sin(1./x),[0.01,0.02])