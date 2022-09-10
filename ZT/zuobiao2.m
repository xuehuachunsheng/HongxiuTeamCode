t=linspace(0,24*pi,1000);
r=exp(sin(t))-2*sin(4.*t)+(cos(t./5)).^6;
subplot(2,1,1),plot(t,r);
subplot(2,1,2),polarplot(t,r)%polarpolt 绘画极坐标图像
