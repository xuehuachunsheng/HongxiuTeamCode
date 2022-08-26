import random
m = []
for i in range(0,15):
    while True:
        a = random.randint(44,86)
        if a in m:
            a = 0
        else:
            break
    m.append(a)
for i in m:
        print("20211100" + str(i))