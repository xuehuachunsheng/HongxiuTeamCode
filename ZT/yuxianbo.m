x=linspace(0,10*pi,100);%创建0-10pi的线性分割向量X，内涵元素100个
fill(x,cos(x),'r')%图形填充
title('余弦波')
xlabel('x')
ylabel('y')
