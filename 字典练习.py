dict1={'name':'zhuchao','age':20,'object':'computer'}
print(dict1['name'])
print(dict1['age'])
print(dict1.get('name'))
print(dict1.get('age'))
if "number" in dict1:
    print(dict1['number'])
else :
    dict1['number']=2021110057    #增添字典元素
    print(dict1.get('number'))
print('number'in dict1)
#遍历
for i in dict1:
    print(i,dict1[i])
keys=dict1.keys()
print(keys)
print(list(keys))
values=dict1.values()
print(values)
print(list(values))
items=dict1.items()
print(items)
print(list(items))
del dict1['number']
print(list (dict1.items()))
print('清空前：',dict1)
dict1.clear()
print('清空后：',dict1)
