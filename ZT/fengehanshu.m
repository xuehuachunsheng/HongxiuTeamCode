x=linspace(0,2*pi,100);
y1=sin(x);
y2=cos(x);
h=plot(x,y1,'-r',x,y2,'.k');%绘制正弦和余弦函数,返回由图线对象组成的列向量h
title('格线控制')
legend(h,'sin(x)','cos(x)')%添加图例
grid on%显示分割线