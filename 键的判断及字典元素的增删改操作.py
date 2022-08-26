dict1={'name1':'朱超','age1':20,'name2':'赵永航','age2':19}
#判断键是否存在
print('name1' in dict1)
print('name1' not in dict1)
#删除指定的键值对
del dict1['name2']
del dict1['age2']
print(dict1)
#清空字典中的所有元素
dict1.clear()
print(dict1)
#添加字典元素
dict1['name3']='胡恒'
dict1['age3']=20
print(dict1)
#修改键所对应的值
dict1['age3']=19
print(dict1)
