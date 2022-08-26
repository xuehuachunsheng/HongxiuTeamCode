a = [[i for i in range(10)] for i in range(10)]
for i in range(0,10):
    for j in range(0,10):
        a[i][j] = i*j
for i in range(0,10):
    for j in range(0,10):
        print(a[i][j],end = "\t")
    print("\n")