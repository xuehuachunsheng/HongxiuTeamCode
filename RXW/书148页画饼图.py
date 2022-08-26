import matplotlib.pyplot as plt
plt.rcParams["font.sans-serif"]=["SimHei"]
plt.rcParams['axes.unicode_minus']=False
hours=(3,2,8,8,3)
labels=("吃饭","素质拓展","睡眠","课程学习","娱乐休闲")
colors=("c","b","m","r","y")
plt.pie(hours,explode=(0,0,0.0,0.06,0),labels=labels,\
        startangle=90,colors=colors,shadow=True,autopct='%1.2% %')
plt.legend()
plt.show()