data_list = [2,1,5,4,2,9,11,2,3,44,19,68]
for i in range(0,11):
    for j in range(0,11-i):
        if data_list[j]>data_list[j+1]:
            m = data_list[j]
            data_list[j] = data_list[j+1]
            data_list[j+1] = m
for i in range(0,12):
    print(data_list[i])