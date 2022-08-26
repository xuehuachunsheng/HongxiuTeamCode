n=int(input("请输入一个整数："))
b=True
for i in range(2,n//2+1):
    if(n%1==0):
        b=False
if b==True:
    print(n,"是素数")
else:
    print(n,"不是素数")
