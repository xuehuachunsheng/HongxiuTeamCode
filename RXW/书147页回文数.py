n = int(input("n="))
m = n
s = 0
while m!=0:
    k = m%10
    s = s*10+k
    m = m//10#为分解下一位数做准备
if s==n:
    print(n,"是回文数")
else:
    print(n,"不是回文数")