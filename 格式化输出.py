lower,upper = input().split()
lower,upper = int(lower),int(upper)
for i in range(lower,upper+1,2):
    print(i,"{:.1f}".format(5*(i-32)/9))
