import requests
import os
url_list = []#创建一个列表
headers = {'User-Agent':'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/96.0.4664.11'
                      '0 Safari/537.36 Edg/96.0.1054.57'}
#此处为字典，键值对
num = int(input('请输入要爬取图片数量：'))
count = 1
#对num（爬取图片的数量）进行向下取整数来知道需要抓取多少json文件，因为一个json文件是30张图，所以除不尽需要多抓一个
def getPage(num):
    return num//30+1
#在函数内部声明变量为global即可在函数内部对函数外的变量进行操作
def getPageUrlList(base_url, num, name):
    global url_list
    global count
    json_list = requests.get(base_url, headers=headers, timeout=600).json()['data']
    print(json_list)
    flag = 0 #初始化
    while True:
        try:
            if flag == 10:
                break
            json_list = requests.get(base_url, headers=headers, timeout=600).json()['data']#构造一个向服务器请求资源的url对象
            #headers模拟浏览器访问，timeout限制访问时间防止服务器不能及时响应
            for url in json_list:
                if count == num + 1:
                    break
                if url:
                    print(url['thumbURL'])
                    url_list.append(url['thumbURL'])#在创建的列表末尾添加
                    print('正在抓取第' + str(count) + '张' + name + '垃圾图片')#str函数将数字转化为字符串
                    count += 1
            break
        except Exception as e:#此处as定义异常实例,将异常对象给e
            print('请求超时')
            flag += 1
            continue

def getJingShuGuanUrl(pages,num):
    global count
    for i in range(1, pages+1):
        base_Url = 'https://image.baidu.com/search/acjson?tn=resultjson_com&logid=9510017954641423990&ipn=rj&c' \
                   't=201326592&is=&fp=result&fr=&word=%E6%9D%8E%E6%98%93%E5%B3%B0&cg=star&queryWord=%E6%9D%8E%E6%98' \
                   '%93%E5%B3%B0&cl=2&lm=-1&ie=utf-8&oe=utf-8&adpicid=&st=&z=&ic=&hd=&latest=&copyright=&s=&se=&tab=&wid' \
                   'th=&height=&face=&istype=&qc=&nc=1&expermode=&nojc=&isAsync=&pn='+str(i*30)+'&rn=30&gsm=1e&1651850267319='
        getPageUrlList(base_Url, num, 'jingshuguan')
    count = 1
    saveImage('废弃水银温度计c')
def saveImage(dirName):
    dir_name = 'd:/'+dirName
    if not os.path.exists(dir_name):#如果没有这个目录
        os.mkdir(dir_name)#os.mkdir函数是在括号内的路径创建目录
    i = 0
    for url in url_list:
        i += 1
        print('正在下载第' + str(i) + '张'+dirName+'图片')
        png = requests.get(url, headers=headers).content
        with open(dir_name + '/'+dirName + str(i) + '.jpg', 'wb') as f:#用于文件的读写操作，省去了关闭文件的麻烦
            f.write(png)#向文件中写入
    url_list.clear()#清除列表中的所有元素

pages = getPage(num)
#pages变量表示抓取json文件数量
getJingShuGuanUrl(pages,num)

print(len(url_list))



# try的工作原理是，当开始一个try语句后，python就在当前程序的上下文中作标记，这样当异常出现时就可以回到这里，try子句(与try同级的except等)
# 先执行，接下来会发生什么依赖于执行时是否出现异常。
# 如果当try后的语句执行时发生异常，python就跳回到try并执行第一个匹配该异常的except子句，异常处理完毕，控制流就通过整个try语句(除非在处理异常时又引发新的异常)。
# 如果在try后的语句里发生了异常，却没有匹配的except子句，异常将被递交到上层的try，或者到程序的最上层(这样将结束程序，并打印缺省的出错信息)。
# 如果在try子句执行时没有发生异常，python将执行else语句后的语句(如果有else的话)，然后控制流通过整个try语句。
# 不管在try有无异常抛出时都会执行本级try对应的finally。
#
# 基础语法try:
# 检测异常代码段except:
# 发生异常后执行代码段else:
# 未发生异常执行代码段finally:


#url指的是统一资源定位系统。url是用于完整地描述Internet上网页和其他资源的地址的一种标识方法。URL = HTTP协议 + 域名 + 路径 + 查询参数 + 锚点。
























