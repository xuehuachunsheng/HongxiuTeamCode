list1=['朱超','男',20,]
list2=['2021110057','软件工程']
list3=list1+list2
print(list1)
print(list2)
print (list3)
for i in range(2,4):
    print(list3[i])
list4=[3,102,46,68,64,3,94,97,545]
print(len(list4))
list4.sort()    #sort:将list4排序
print(list4)
del list4[1]  #del： 删除指定索引值的元素
print(list4)
list4.remove(64)
print(list4)
list4.sort(reverse=True)   #reverse=True将list4倒序排列
print(list4)
list4.sort(reverse=False)   #reverse=False将list4顺序排列
print(list4)
new_list4=sorted(list4,reverse=True)
print('new_list4= ',new_list4)
new2_list4=sorted(new_list4,reverse=False)
print('new2_list4=',new2_list4)
#插入元素
list3.append('15-203')   #在列表末尾增添元素
print(list3)
del list3[2]
print(list3)
list3.insert (2,20)   #insert增添元素  (2,20):2代表索引值，20代表插入得值
print(list3)
list3.insert(0,'优秀')
print(list3)
list3.append('优秀')
print(list3)
