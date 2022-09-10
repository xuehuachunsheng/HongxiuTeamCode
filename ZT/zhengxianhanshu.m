x=0:pi/50:2*pi;
plot(x,sin(x))
title('正弦函数图形')
xlabel('x value'),ylabel('sin(x)')
text(3*pi/4,sin(3*pi/4),'<---sin(3pi/4)')
%在x=3*pi/4，y=sin（3*pi/4）的位置中添加文本
text(5*pi/4,sin(5*pi/4),'sin(5pi/4)\rightarrow','horizontalalignment','right')
%在指定位置标注函数，标注文字水平方向右对齐