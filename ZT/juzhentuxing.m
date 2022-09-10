Y=[45 6 8;7 4 7;6 25 4; 7 5 8;9 9 4;2 6 8];
subplot(2,2,1)
bar(Y)
title('图1')
subplot(2,2,2)
bar3(Y),title('图2')
subplot(2,2,3)
bar(Y,2.5)%图形的相对宽度为2.5
title('图3')
subplot(2,2,4)
bar(Y,'stack'),title('图4')%绘制堆叠图形
figure(2)%创建一个新的绘图窗口
area(Y)
grid on 
set(gca,'layer','top')
title('面积图')