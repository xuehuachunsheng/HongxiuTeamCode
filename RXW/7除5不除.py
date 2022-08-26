n = int(input())
a = []
for i in range(1,n):
    if i%7==0 and i%5!=0:
        a.append(i)
print(a)