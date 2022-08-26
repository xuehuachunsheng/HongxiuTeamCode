for i in range (100,1000):
    sm = 0
    temp = i
    for j in range(3):
        sm += (temp%10)**3
        temp//=10
        if sm == i:
            print(i)