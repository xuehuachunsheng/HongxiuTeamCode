fruits = ["apple"," banana ","lemon"]
fruits.append("orange")#末尾添加orange
print(fruits)

motorcycles = []#声明一个空列表
motorcycles.append("honda")#末尾添加
motorcycles.append("yamaha")
print(motorcycles)

fruits = ["apple"," banana ","lemon"]
fruits.insert(1,"strawberry")#插入
print(fruits)
del fruits[0]#用del删除任意一个元素
print(fruits)
a = fruits.pop()#删除最后一个,类似于append添加最后一个
#fruits.pop(0)   删除第一个，括号内填下标可删除任意位置
print(a)
print(fruits)

#当不知道下标的时候删除元素可使用remove,一次只删除第一个指定的值
fruits = ["apple"," banana ","lemon"]
fruits.remove("apple")
print(fruits)

#对列表进行永久排序
cars = ["bwm", "audi", "toyota", "subaru"]
cars.sort()#按照字母来排序
print(cars)
cars.sort(reverse=True)
print(cars)

#输出的时候进行临时排序
cars = ["bwm", "audi", "toyota", "subaru"]
print(sorted(cars))
print(sorted(cars,reverse=True))

#反转列表顺序
cars = ["bwm", "audi", "toyota", "subaru"]
cars.reverse()
print(cars)

#计算列表长度
cars = ["bwm", "audi", "toyota", "subaru"]
print(len(cars))

#遍历
cars = ["bwm", "audi", "toyota", "subaru"]
for car in cars:
    print(car)

#创建数字列表
numbers = list(range(1,6))
print(numbers)
numbers = list(range(2,11,2))
print(numbers)

#统计函数
digits = [1,2,3,4,5,6,7,8,9,0]
print(min(digits))
print(max(digits))
print(sum(digits))

#创建列表
squares = [value**2 for value in range(1,11)]
print(squares)

#for中使用切片
cars = ["bwm", "audi", "toyota", "subaru"]
for car in cars[-1:-2:-1]:
    print(car.title())

cars = ["bwm", "audi", "toyota", "subaru"]
cars2 = cars[:]#如果没用切片来复制会造成改变一个列表元素另一个会跟着改变
print(cars2)

#元组
diensions = (200,50)
print(diensions[0])
print(diensions[1])

#字典
alien_0 = {"color":"green", "point":5}
print(alien_0["color"])#访问
print(alien_0["point"])

#添加键值对
alien_0 = {"color":"green", "point":5}
print(alien_0)
alien_0["x_position"] = 0#添加
alien_0["y_position"] = 25
print(alien_0)#python不关心键值对的添加顺序，只关心对应的关系

#创建、修改字典
alien_0 = {}
alien_0["color"] = "green"
alien_0["points"] = 5
print(alien_0)

#删除键值对
alien_0 = {"color":"green", "points":5}
print(alien_0)
del alien_0["points"]
print(alien_0)
#存储众多对象，注意缩进
favorite_languages = { 
    'jen': 'python', 
    'sarah': 'c', 
    'edward': 'ruby', 
    'phil': 'python', 
    }

#遍历字典
# user = {
#     "username":"efermi",
#     "first":"enrico",
#     "last":"fermi",
#     }
# for k, v in user.items():
#     print(k)
#     print(v)

user = {
    "username":"efermi",
    "first":"enrico",
    "last":"fermi",
    }
for k in user:#.keys()是键.values()是值
#for k in user.values():
    print(k)

#临时排序
user = {
    "username":"efermi",
    "first":"enrico",
    "last":"fermi",
    }
for name in sorted(user.keys()):
    print(name)

#调用set()找出独一无二的元素，重复的不输出
user = {
    "username":"efermi",
    "first":"enrico",
    "last":"fermi",
    "love":"fermi",
    }
print("\n")
for ab in set(user.values()):
    print(ab)

#嵌套，列表中存储字典
print("\n")
alien_0 = {'color': 'green', 'points': 5} 
alien_1 = {'color': 'yellow', 'points': 10} 
alien_2 = {'color': 'red', 'points': 15} 
aliens = [alien_0, alien_1, alien_2]
for alien in aliens: 
    print(alien)

#嵌套，字典中存储列表
pizza = {'crust': 'thick', 
    'toppings': ['mushrooms', 'extra cheese'], 
    } 
print("You ordered a " + pizza['crust'] + "-crust pizza " +
    "with the following toppings:") 
for a in pizza['toppings']: 
    print("\t" + a) 

#嵌套，字典中存储字典
users = {
    "aeinstein": {
        "first": "albert",
        "last": "einstein",
        "location": "princeton",
        },
    "mcurie":{
        "first": "marie",
        "last": "curie",
        "location": "paris",
        },
    }
for a,b in users.items():
    print(a)
    full_name = b["first"] + " " + b["last"]
    location = b["location"]
    print(full_name.title())
    print(location.title())

#输入
# rxw = input("请输入一个字符串：")
# rxw = int(rxw)
# if rxw >= 20:
#     print(rxw)

#while的使用
# active = True
# while active:
#     message = input()
#     if message == "quit":
#         active = False
#     else:
#         print(message)
    
#使用循环在列表间移动元素
a = ["jake", "alice", "ken"]
b = []
while a:
    c = a.pop()#删除最后一个元素
    b.append(c)
for he in b:
    print(he.title())
    












































