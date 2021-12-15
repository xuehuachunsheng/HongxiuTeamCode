# 8 15
# 1 2 8 7 2 4 11 15


import sys  # 声明一个模块sys

a_str = input()
b_str = input()
N,M = a_str.split(" ") # split 拆分字符串（默认以空格为分隔符）
N,M = int(N), int(M)
account = b_str.split(" ")
for i, x in enumerate(account): # enumerate:对于一个可迭代的（iterable）/可遍历的对象（如列表、字符串），enumerate将其组成一个索引序列，利用它可以同时获得索引和值
   account[i] = int(x) # 索引的字符赋给x，x再强制转换为整型
account = sorted(account) # 排序(从小到大）
acc_set = {}
for i in account:
   acc_set[i] = acc_set.get(i,0) + 1 # 建立Hash映射 其中键是面额，值是面额对应硬币数量
                                     #>>> dict = {'a':'AA', 'b':'BB', 'c':'CC'}
                                     #>>> dict['a']
                                     #'AA'
                                     #>>> dict.get('a')
                                     #'AA'
                                     # get()语法：
                                     #dict.get(key,default = NULL)   key:字典中查找的键  default:如果指定键的值不存在时，返回该默认值(0)


for x in account:
   rem = M - x # 求差
   # 判断差rem在不在集合里面
   if (rem != x and rem in acc_set) or (rem == x and acc_set[x] >= 2):
       print(x, rem)
       sys.exit(0)
print("No Solution!")