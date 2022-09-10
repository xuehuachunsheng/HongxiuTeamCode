close all
Y=randn(10000,1);
%创建正态分布随机矩阵Y，大小为10000*1
subplot(1,2,1)
histogram(Y)
title('高斯分布柱状图')
x=[-10 -3:0.1:3 10];%定义边界，并捕捉绝对值小于3的离群值
subplot(1,2,2)
p=histogram(Y,x)%绘制指定边界的柱形图
set(p,'facecolor','r')
title('指定范围的高斯分布柱状图')
figure(2)
theta=Y*pi;
polarhistogram(theta);
title('极坐标下的高斯分布柱状图')