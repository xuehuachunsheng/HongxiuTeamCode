list1=[78,62,98,85,68]
list2=[27,26,89,58,86]
list3=["2021110057","朱超","男","20","软工"]
print(list1+list3)  #连接list1和list3(不同类型的列表也可以连接）
list1.append(13)      #z在list1的最后增加一个元素(13)
list2.insert(3,100)    #在list2中第三个元素后面插入100
print(list1)
print(list2)
list1.remove(62)    #删除list1中第一个值为62的元素
print(list1)
del list2[5]   #删除list2中索引值为5的元素
print(list2)
print(len(list1)) #输出列表长度


       #sort方法是对原列表进行排序


list2.sort()      #将list2升序排序
print(list2)
list2.sort (reverse=True)   #将list2降序排序
print(list2)
list2.sort(reverse=False)   #将list2升序排序
print(list2)


        #sorted是产生一个新的列表对象，原列表不发生改变


new_list1=sorted(list1)    #将list1中的元素升序排序，并存储于一个新列表（new_list1）中，list1中的元素顺序没有变
print("list1中的元素",list1)
print("升序new_list1中的元素",new_list1)
new_list1=sorted(list1,reverse=True)  #将list1中的元素降序排序，并存储于一个新列表（new_list1）中，list1中的元素顺序没有变
print("降序new_list1中的元素",new_list1)

