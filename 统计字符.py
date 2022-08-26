a = input("请输入字符串:")
n = []
z,x,c,v,b = 0,0,0,0,0
for i in a:
    n.append(ord(i))
for j in n:
    if(j<=90 and j>=65):
        z += 1
    elif(j<=122 and j>=97):
        x += 1
    elif(j<=57 and j>=48):
        c += 1
    elif(j==32):
        v += 1 
    else:
        b += 1
print("大写字母有" + str(z) +"个 "+ "小写字母有" + str(x) +"个 "+ "数字有" + str(c) +"个 "+ "空格有" + str(v) + "个 " + "其它字符有" + str(b) +"个")