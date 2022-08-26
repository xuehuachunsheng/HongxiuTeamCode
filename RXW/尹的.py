n = int(input("请输入要多少以内的奇数："))
b = int(n/2)
a = [[0] for i in range(0,b)]
j = 0
for i in range(0,n):
    if(i%2!=0):
        a[j] = i
        j = j + 1
#for i in range(0,j):
print(a)