import requests
import os
url_list=[]
headers={'User-Agent':'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/96.0.4664.110 Safari/537.36 Edg/96.0.1054.57'}
num=int(input('请输入要爬取图片数量：'))
count =1
def getPage(num):
    return  num//30+1
def getPageUrlList(base_url,num,name):
    global url_list
    global count
    json_list = requests.get(base_url, headers=headers, timeout=600).json()['data']
    print(json_list)
    flag=0
    while True:
        try:
            if flag==10:
                break
            json_list = requests.get(base_url, headers=headers, timeout=600).json()['data']
            for url in json_list:
                if count == num + 1:
                    break
                if url:
                    print(url['thumbURL'])
                    url_list.append(url['thumbURL'])
                    print('正在抓取第' + str(count) + '张' + name + '垃圾图片')
                    count += 1
            break
        except Exception as e:
            print('请求超时')
            flag+=1
            continue

# def getChanZhiLuoYeUrl(pages,num):
#     global count
#     for i in range(1, pages + 1):
#         base_url = 'https://image.baidu.com/search/acjson?tn=resultjson_com&logid=10132005350780598569&ipn=rj&ct='\
#                    '201326592&is=&fp=result&fr=&word=%E8%90%BD%E5%8F%B6%E7%89%B9%E5%86%99%E5%9B%BE%E7%89%87&queryWord='\
#                    '%E8%90%BD%E5%8F%B6%E7%89%B9%E5%86%99%E5%9B%BE%E7%89%87&cl=2&lm=-1&ie=utf-8&oe=utf-8&adpicid=&st=-1&z='\
#                    '&ic=0&hd=1&latest=0&copyright=0&s=&se=&tab=&width=&height=&face=0&istype=2&qc=&nc=1&expermode=&nojc=&'\
#                    'isAsync=&pn='+str(i*30)+'&rn=30&gsm=1e&1641432767415='
#         getPageUrlList(base_url,num,'chanzhiluoye')
#     count=1
#     saveImage('残枝落叶')
def getYaQianUrl(pages,num):
    global count
    for i in range(1,pages+1):
        base_Url = 'https://image.baidu.com/search/acjson?tn=resultjson_com&logid=8292390614367152095&ipn=rj&ct=201326592&is=&fp' \
                   '=result&fr=&word=%E6%8A%A5%E7%BA%B8&queryWord=%E6%8A%A5%E7%BA%B8&cl=2&lm=-1&ie=utf-8&oe=utf-8&adpicid=&st=-1&' \
                   'z=&ic=&hd=&latest=&copyright=&s=&se=&tab=&width=&height=&face=0&istype=2&qc=&nc=1&expermode=&nojc=&isAsyn' \
                   'c=&pn='+str(i*30)+'&rn=30&gsm=1e&1641968146044='
        getPageUrlList(base_Url,num,'yicixingcanju')
    count=1
    saveImage('报纸')
# def getNiaoPianUrl(pages,num):
#     global count
#     for i in range(1,pages+2):
#         if i==10:
#             continue
#         base_url = 'https://image.baidu.com/search/acjson?tn=resultjson_com&logid=10761350288774816896&ipn=rj&ct=201326592&is=&fp=' \
#                    'result&fr=&word=%E7%BA%B8%E6%9D%AF&queryWord=%E7%BA%B8%E6%9D%AF&cl=2&lm=-1&ie=utf-8&oe=utf-8&adpicid=&st=-1&' \
#                    'z=&ic=&hd=&latest=&copyright=&s=&se=&tab=&width=&height=&face=0&istype=2&qc=&nc=1&expermode=&nojc=&isA' \
#                    'sync=&pn='+str(i*10)+'&rn=30&gsm=1e&1641708763536='
#         getPageUrlList(base_url,num,'zhibei')
#     count=1
#     saveImage('纸杯')
# def getDaGuTouUrl(pages,num):
#     global count
#     for i in range(1,pages+1):
#         base_url='https://image.baidu.com/search/acjson?tn=resultjson_com&logid=7665498020432380727&ipn=rj&ct=201326592&is=&fp=result&'\
#                  'fr=&word=%E7%8C%AA%E5%A4%A7%E9%AA%A8%E5%A4%B4%E7%9C%9F%E5%AE%9E%E5%9B%BE%E7%89%87&queryWord=%E7%8C%AA%E5%A4%A7%E9%AA%A8'\
#                  '%E5%A4%B4%E7%9C%9F%E5%AE%9E%E5%9B%BE%E7%89%87&cl=2&lm=-1&ie=utf-8&oe=utf-8&adpicid=&st=-1&z=&ic=&hd=&latest=&copyright='\
#                  '&s=&se=&tab=&width=&height=&face=0&istype=2&qc=&nc=1&expermode=&nojc=&isAsync=&pn='+str(i*30)+'&rn=30&gsm=3c&1641434335054='
#         getPageUrlList(base_url,num,'dagutou')
#     count=1
#     saveImage('大骨头')
# def getYuGuUrl(pages,num):
#     global count
#     for i in range(1,pages+1):
#         base_url='https://image.baidu.com/search/acjson?tn=resultjson_com&logid=10573229840795920877&ipn=rj&ct=201326592&is=&fp='\
#                  'result&fr=&word=%E7%9C%9F%E5%AE%9E%E9%B1%BC%E9%AA%A8%E6%9E%B6%E5%9B%BE%E7%89%87&queryWord=%E7%9C%9F%E5%AE%9E%E9%B1%'\
#                  'BC%E9%AA%A8%E6%9E%B6%E5%9B%BE%E7%89%87&cl=2&lm=-1&ie=utf-8&oe=utf-8&adpicid=&st=-1&z=&ic=&hd=&latest=&copyright=&s=&se='\
#                  '&tab=&width=&height=&face=0&istype=2&qc=&nc=1&expermode=&nojc=&isAsync=&pn='+str(i*30)+'&rn=30&gsm=1e&1641435186250='
#         getPageUrlList(base_url,num,'yugu')
#     count=1
#     saveImage('鱼骨')
# def getShuiGuoGuoPiUrl(pages,num):
#     global count
#     for i in range(1,pages+1):
#         base_url='https://image.baidu.com/search/acjson?tn=resultjson_com&logid=10815788527113934363&ipn=rj&ct=201326592&is=&fp='\
#                  'result&fr=&word=%E6%B0%B4%E6%9E%9C%E7%9A%AE%E5%9B%BE%E7%89%87&queryWord=%E6%B0%B4%E6%9E%9C%E7%9A%AE%E5%9B%BE%E7%89'\
#                  '%87&cl=2&lm=-1&ie=utf-8&oe=utf-8&adpicid=&st=-1&z=&ic=&hd=&latest=&copyright=&s=&se=&tab=&width=&height=&face=0&'\
#                  'istype=2&qc=&nc=1&expermode=&nojc=&isAsync=&pn='+str(i*30)+'&rn=30&gsm=1e&1641435328517='
#         getPageUrlList(base_url,num,'shuiguoguopi')
#     count=1
#     saveImage('水果果皮')
# def getShuiGuoGuoRouUrl(pages,num):
#     global count
#     for i in range(1, pages + 1):
#         base_url = 'https://image.baidu.com/search/acjson?tn=resultjson_com&logid=10846559600919423753&ipn=rj&ct=201326592&is=&fp'\
#                    '=result&fr=ala&word=%E6%B0%B4%E6%9E%9C%E6%9E%9C%E8%82%89%E5%9B%BE%E7%89%87&queryWord=%E6%B0%B4%E6%9E%9C%E6%9E%9C%E8'\
#                    '%82%89%E5%9B%BE%E7%89%87&cl=2&lm=-1&ie=utf-8&oe=utf-8&adpicid=&st=&z=&ic=&hd=&latest=&copyright=&s=&se=&tab=&width=&he'\
#                    'ight=&face=&istype=&qc=&nc=&expermode=&nojc=&isAsync=&pn='+str(i*30)+'&rn=30&gsm=78&1641457369119='
#         getPageUrlList(base_url, num, 'shuiguoguorou')
#     count=1
#     saveImage('水果果肉')
# def getShengCaiShengFanUrl(pages,num):
#     global count
#     for i in range(1, pages + 1):
#         base_url = 'https://image.baidu.com/search/acjson?tn=resultjson_com&logid=7543749068441192602&ipn=rj&ct=201326592&is=&fp='\
#                    'result&fr=&word=%E5%89%A9%E9%A5%AD%E5%89%A9%E8%8F%9C%E5%9B%BE%E7%89%87&queryWord=%E5%89%A9%E9%A5%AD%E5%89%A9%E8%'\
#                    '8F%9C%E5%9B%BE%E7%89%87&cl=2&lm=-1&ie=utf-8&oe=utf-8&adpicid=&st=-1&z=&ic=&hd=&latest=&copyright=&s=&se=&tab=&width='\
#                    '&height=&face=0&istype=2&qc=&nc=1&expermode=&nojc=&isAsync=&pn='+str(i*30)+'&rn=30&gsm=1e&1641436402685='
#         getPageUrlList(base_url, num, 'shengcaishengfan')
#     count=1
#     saveImage('剩菜剩饭')
# def getChaYeZhaUrl(pages,num):
#     global count
#     for i in range(1, pages + 1):
#         base_url = 'https://image.baidu.com/search/acjson?tn=resultjson_com&logid=10282273384581693015&ipn=rj&ct=201326592&is=&fp='\
#                    'result&fr=&word=%E8%8C%B6%E5%8F%B6%E6%B8%A3%E5%9B%BE%E7%89%87&queryWord=%E8%8C%B6%E5%8F%B6%E6%B8%A3%E5%9B%BE%E7%'\
#                    '89%87&cl=2&lm=-1&ie=utf-8&oe=utf-8&adpicid=&st=-1&z=&ic=&hd=&latest=&copyright=&s=&se=&tab=&width=&height=&face=0'\
#                    '&istype=2&qc=&nc=1&expermode=&nojc=&isAsync=&pn='+str(i*30)+'&rn=30&gsm=1e&1641436578235='
#         getPageUrlList(base_url, num, 'chayezha')
#     count=1
#     saveImage('茶叶渣')
# def getXiCanGaoDianUrl(pages,num):
#     global count
#     for i in range(1, pages + 1):
#         base_url = 'https://image.baidu.com/search/acjson?tn=resultjson_com&logid=9041548338272992363&ipn=rj&ct=201326592&is=&fp=result&'\
#                    'fr=&word=%E8%A5%BF%E9%A4%90%E7%B3%95%E7%82%B9%E5%9B%BE%E7%89%87&queryWord=%E8%A5%BF%E9%A4%90%E7%B3%95%E7%82%B9%E5%9B'\
#                    '%BE%E7%89%87&cl=2&lm=-1&ie=utf-8&oe=utf-8&adpicid=&st=-1&z=&ic=&hd=&latest=&copyright=&s=&se=&tab=&width=&height='\
#                    '&face=0&istype=2&qc=&nc=1&expermode=&nojc=&isAsync=&pn='+str(i*30)+'&rn=30&gsm=1e&1641436741084='
#         getPageUrlList(base_url, num, 'xicangaodian')
#     count=1
#     saveImage('西餐糕点')
# def getCaiGengCaiYeUrl(pages,num):
#     global count
#     for i in range(1, pages + 1):
#         base_url = 'https://image.baidu.com/search/acjson?tn=resultjson_com&logid=11220856294453808767&ipn=rj&ct=201326592&is=&fp='\
#                    'result&fr=&word=%E8%8F%9C%E6%A2%97%E8%8F%9C%E5%8F%B6%E5%9B%BE%E7%89%87&queryWord=%E8%8F%9C%E6%A2%97%E8%8F%9C%E5%8'\
#                    'F%B6%E5%9B%BE%E7%89%87&cl=2&lm=-1&ie=utf-8&oe=utf-8&adpicid=&st=-1&z=&ic=&hd=&latest=&copyright=&s=&se=&tab=&width='\
#                    '&height=&face=0&istype=2&qc=&nc=1&expermode=&nojc=&isAsync=&pn='+str(i*30)+'&rn=30&gsm=1e&1641436852392='
#         getPageUrlList(base_url, num, 'caigengcaiye')
#     count=1
#     saveImage('菜梗菜叶')
# def getLuoYeUrl(pages,num):
#     global count
#     for i in range(1, pages + 1):
#         base_url = 'https://image.baidu.com/search/acjson?tn=resultjson_com&logid=8036634108015624544&ipn=rj&ct=201326592&is=&fp='\
#                    'result&fr=&word=%E8%90%BD%E5%8F%B6%E5%9B%BE%E7%89%87&queryWord=%E8%90%BD%E5%8F%B6%E5%9B%BE%E7%89%87&cl=2&lm=-1&ie='\
#                    'utf-8&oe=utf-8&adpicid=&st=-1&z=&ic=&hd=&latest=&copyright=&s=&se=&tab=&width=&height=&face=0&istype=2&qc=&nc=1&'\
#                    'expermode=&nojc=&isAsync=&pn='+str(i*30)+'&rn=30&gsm=1e&1641437065105='
#         getPageUrlList(base_url, num, 'luoye')
#     count=1
#     saveImage('落叶')
# def getPaoMoUrl(pages,num):
#     global count
#     for i in range(1, pages + 1):
#         base_url = 'https://image.baidu.com/search/acjson?tn=resultjson_com&logid=10578331927687916762&ipn=rj&ct=201326592&is=&' \
#                    'fp=result&fr=ala&word=%E6%B3%A1%E6%B2%AB%E5%9E%83%E5%9C%BE%E5%9B%BE%E7%89%87%E5%A4%A7%E5%85%A8&queryWord=%' \
#                    'E6%B3%A1%E6%B2%AB%E5%9E%83%E5%9C%BE%E5%9B%BE%E7%89%87%E5%A4%A7%E5%85%A8&cl=2&lm=-1&ie=utf-8&oe=utf-8&adpicid' \
#                    '=&st=&z=&ic=&hd=&latest=&copyright=&s=&se=&tab=&width=&height=&face=&' \
#                    'istype=&qc=&nc=&expermode=&nojc=&isAsync=&pn='+str(i*30)+'&rn=30&gsm=1e&1639534214062='
#         getPageUrlList(base_url, num, 'paomo')
#     count=1
#     saveImage('泡沫垃圾')
# def getJingShuGuanUrl(pages,num):
#     global count
#     for i in range(1,pages+1):
#         base_Url = 'https://image.baidu.com/search/acjson?tn=resultjson_com&logid=10238448750260925307&ipn=rj&'\
#                    'ct=201326592&is=&fp=result&fr=&word=%E9%A3%9F%E5%93%81%E9%87%91%E5%B1%9E%E7%BD%90&queryWord=%'\
#                    'E9%A3%9F%E5%93%81%E9%87%91%E5%B1%9E%E7%BD%90&cl=2&lm=-1&ie=utf-8&'\
#                    'oe=utf-8&adpicid=&st=-1&z=&ic=&hd=&latest=&copyright=&s=&se=&tab=&width=&height=&'\
#                    'face=0&istype=2&qc=&nc=1&expermode=&nojc=&isAsync=&pn='+str(i*30)+'&rn=30&gsm=3c&1641201920360='
#         getPageUrlList(base_Url,num,'jingshuguan')
#     count = 1
#     saveImage('金属罐垃圾')
def saveImage(dirName):
    dir_name = 'd:/'+dirName
    if not os.path.exists(dir_name):
        os.mkdir(dir_name)
    i = 0
    for url in url_list:
        i += 1
        print('正在下载第' + str(i) + '张'+dirName+'图片')
        png = requests.get(url, headers=headers).content
        with open(dir_name + '/'+dirName + str(i) + '.jpg', 'wb') as f:
            f.write(png)
    url_list.clear()

pages=getPage(num)
# getChanZhiLuoYeUrl(pages,num)
getYaQianUrl(pages,num)
# getNiaoPianUrl(pages,num)
# getDaGuTouUrl(pages,num)
# getYuGuUrl(pages,num)
# getShuiGuoGuoPiUrl(pages,num)
# getShuiGuoGuoRouUrl(pages,num)
# getShengCaiShengFanUrl(pages,num)
# getChaYeZhaUrl(pages,num)
# getXiCanGaoDianUrl(pages,num)
# getCaiGengCaiYeUrl(pages,num)
# getLuoYeUrl(pages,num)
# getPaoMoUrl(pages,num)
# getJingShuGuanUrl(pages,num)
print(len(url_list))



