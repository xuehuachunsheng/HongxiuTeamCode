yanghui_list = [[1],[1,1]]
n = int(input("n="))
for i in range(2,n):
    row_list= list()
    for j in range(i+1):
        row_list.append(0)
    row_list[0] = 1
    row_list[i] = 1
    for k in range(1,i):
        row_list[k] = yanghui_list[i-1][k-1]+yanghui_list[i-1][k]
    yanghui_list.append(row_list)
for i in range(n):
    for k in range(i+1):
        print(yanghui_list[i][k],end = "\t")
    print("\n")
    