t=0:2*pi/99:2*pi;%定义取值区间和取值点  取值区间为0~2*pi；取值点为2*pi/99；
x=1.15*cos(t);
y=3.25*sin(t);
subplot(2,3,1),plot(x,y),axis normal,grid on,
title('normal and grid on')
subplot(2,3,2),plot(x,y),axis equal,grid on,title('Equal')
subplot(2,3,3),plot(x,y),axis square,grid on,title('Square')
subplot(2,3,4),plot(x,y),axis image,box off,title('Image and box off')
subplot(2,3,5),plot(x,y),axis image fill,box off%box off 隐藏坐标区的轮廓，仅显示图形
title('Image and fill')
subplot(2,3,6),plot(x,y),axis tight,box off,title('Tight')