n = int(input())
result = 0
for i in range(1,n+1,1):
    if i%2==1:
        result = result +i/(2*i-1)
    else:
        result = result -i/(2*i-1)
print("{:.3f}".format(result))
