str1 = input("请输入字符串=")
cnt = 0
str2 = ""
for ch in str1:
    if ch>="0" and ch<="9":
        str2+=ch
        cnt+=1
num = int(str2)*cnt
print(num)