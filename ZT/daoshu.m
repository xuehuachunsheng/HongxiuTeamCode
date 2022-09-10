x=0:0.1:2;
plot(x,1./x)
title('倒数函数')
xlabel('x'),ylabel('1./x')
text(0.25,1./0.25,'<---1./0.25')
text(0.5,1./0.5,'1./0.5\rightarrow','horizontalalignment','right')
%rightarrow表示→，同理，leftarrow表示←
%horizontal alignment,表示文本右对齐

