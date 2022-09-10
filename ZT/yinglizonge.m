X=[528 701 658 780];
subplot(2,2,1)
bar(X)
title('盈利总额的二维条形图')
subplot(2,2,2)
bar3(X),title('盈利总额的三维条形图')
subplot(2,2,3)
pie(X)
title('饼图')
subplot(2,2,4)
explode=[0 0 0 1];%设置偏移量，设置第四个饼图偏离中心一定位置
pie3(X,explode)%绘制三维饼图，并包含偏移量
title('分离饼图')