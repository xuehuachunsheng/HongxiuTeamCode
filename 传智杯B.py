T = int(input())#输入有几组数据
for i in range(T):
    n = int(input())#输入这组数据有几个数
    a = list(map(int,input().split()))#使用split函数对数组以空格进行分割
    ans = 0
    for i in range(n):
        for j in range(i,n):
            for k in range(j,n):
                if(a[i] + a[j] == a[k]):
                    ans += 1
    print(ans)
#1<=i<=j<=k<=n