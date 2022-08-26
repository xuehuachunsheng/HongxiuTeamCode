n = int(input("请输入列表长度："))
a = [[0] for i in range(0,n)]
for i in range(0,n):
    a[i] = int(input())
print(max(a))
