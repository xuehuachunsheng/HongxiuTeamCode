n,e,s=int(input()),1,1
for i in range(1,n+1):
    s*=i
    e+=1/s
print("%.8f"%e)