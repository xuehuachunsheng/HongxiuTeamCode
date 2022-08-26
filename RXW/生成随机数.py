import random
a = []
for b in range(0,10):
    a.append(random.randint(0,100))
for i in range(0,5):
    for j in range(0,5-i):
        if(a[j]>a[j+1]):
            temp = a[j]
            a[j] = a[j+1]
            a[j+1] = temp
for i in range(5,10):
    for j in range(5,10-i):
        if(a[j]<a[j+1]):
            temp = a[j]
            a[j] = a[j+1]
            a[j+1] = temp
print(a)