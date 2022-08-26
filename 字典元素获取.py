dict1={'名字':'朱超','年龄':20}
#第一种方法：
print(dict1['名字'])
print(dict1['年龄'])   #若键不存在，用第一种方法会报错
#第二种方法：使用get()
print(dict1.get('名字'))
print(dict1.get('年龄'))
print(dict1.get('学号'))  #若键不存在，用第二种方法会返回None
print(dict1.get('成绩',99))   #若键不存在，则99是默认返回值  
