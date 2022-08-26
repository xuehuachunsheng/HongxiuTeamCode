list=[5,45,36,85,42,75,99,44]
for i in range(0,7):
    for j in range (0,7-i):
        if list[j] > list[j+1]:
            n=list[j]
            list[j]=list[j+1]
            list[j+1]=n
for i in range(0,8):
    print(list[i])
