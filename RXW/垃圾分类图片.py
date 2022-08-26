import requests
import re
from bs4 import BeautifulSoup
import os
from xpinyin import Pinyin
url_list=[]
headers={'User-Agent':'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/96.0.4664.93 Safari/537.36'}
num=int(input('请输入要爬取图片数量：'))
count =1
def getPage(num):
    return  num//30+1
def getPageUrlList(base_url,num,name):
    global url_list
    global count
    flag=0
    while True:
        try:
            if flag==10:
                break
            json_list = requests.get(base_url, headers=headers, timeout=60).json()['data']
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

def getZhiJingUrl(pages,num):
    global count
    for i in range(1, pages + 1):
        base_url = 'https://image.baidu.com/search/acjson?tn=resultjson_com&logid=10449306600328809214&ipn=rj&ct=201326592&is=&fp=result&fr=ala&' \
                   'word=%E5%8D%AB%E7%94%9F%E7%BA%B8%E5%9E%83%E5%9C%BE%E5%9B%BE%E7%89%87&queryWord=%E5%8D%AB%E7%94%9F%E7%BA%B8%E5%9E%83%E5%9C%BE%' \
                   'E5%9B%BE%E7%89%87&cl=2&lm=-1&ie=utf-8&oe=utf-8&adpicid=&st=&z=&ic=&hd=&latest=&copyright=&s=&se=&tab=&width=&height=&face=&' \
                   'istype=&qc=&nc=&expermode=&nojc=&isAsync=&pn=' + str(i * 30) + '&rn=30&gsm=1e&1639493414686='
        getPageUrlList(base_url,num,'zhijing')
    count=1
    saveImage('纸巾垃圾')
def getNiaoPianUrl(pages,num):
    global count
    for i in range(1,pages+1):
        base_Url = 'https://image.baidu.com/search/acjson?tn=resultjson_com&logid=11694593679164194719&ipn=rj&ct=201326592&is=&fp=result&' \
                   'fr=ala&word=%E5%B0%BF%E7%89%87%E5%9E%83%E5%9C%BE%E5%9B%BE%E7%89%87&queryWord=%E5%B0%BF%E7%89%87%E5%9E%83%E5%9C%BE%E5%' \
                   '9B%BE%E7%89%87&cl=2&lm=-1&ie=utf-8&oe=utf-8&adpicid=&st=&z=&ic=&hd=&latest=&copyright=&s=&se=&tab=&' \
                   'width=&height=&face=&istype=&qc=&nc=&expermode=&nojc=&isAsync=&pn='+str(i*30)+'&rn=30&gsm=1e&1639498698366='
        getPageUrlList(base_Url,num,'niaopian')
    count = 1
    saveImage('尿片垃圾')
def getBeiKeUrl(pages,num):
    global count
    for i in range(1,pages+2):
        if i==10:
            continue
        base_url = 'https://image.baidu.com/search/acjson?tn=resultjson_com&logid=10791800559890605572&ipn=rj&ct=201326592&is=&fp=result&' \
                   'fr=ala&word=%E8%B4%9D%E5%A3%B3%E5%9E%83%E5%9C%BE%E5%9B%BE%E7%89%87&queryWord=%E8%B4%9D%E5%A3%B3%E5%9E%83%E5%9C%BE%E5%9B%' \
                   'BE%E7%89%87&cl=2&lm=-1&ie=utf-8&oe=utf-8&adpicid=&st=&z=&ic=&hd=&latest=&copyright=&s=&se=&tab=&width=&height=&face=&' \
                   'istype=&qc=&nc=&expermode=&nojc=&isAsync=&pn='+str(i*30)+'&rn=30&gsm=1e&1639499909076='
        getPageUrlList(base_url,num,'beike')
    count=1
    saveImage('贝壳垃圾')
def getWenDuJiUrl(pages,num):
    global count
    for i in range(1,pages+1):
        base_url='https://image.baidu.com/search/acjson?tn=resultjson_com&logid=12008571369946827415&ipn=rj&ct=201326592&is=&' \
                  'fp=result&fr=ala&word=%E5%BA%9F%E6%B8%A9%E5%BA%A6%E8%AE%A1%E5%9B%BE%E7%89%87&queryWord=%E5%BA%9F%E6%B8%A9%E5%' \
                  'BA%A6%E8%AE%A1%E5%9B%BE%E7%89%87&cl=2&lm=-1&ie=utf-8&oe=utf-8&adpicid=&st=&z=&ic=&hd=&latest=&copyright=&s=&se=&' \
                  'tab=&width=&height=&face=&istype=&qc=&nc=&expermode=&nojc=&isAsync=&pn='+str(i*30)+'&rn=30&gsm=1e&1639529848145='
        getPageUrlList(base_url,num,'wenduji')
    count=1
    saveImage('灯管垃圾')
def getGanDianchiUrl(pages,num):
    global count
    for i in range(1,pages+1):
        base_url='https://image.baidu.com/search/acjson?tn=resultjson_com&logid=11038225347818824107&ipn=rj&ct=201326592&is=&' \
                 'fp=result&fr=ala&word=%E5%B9%B2%E7%94%B5%E6%B1%A0%E5%9E%83%E5%9C%BE%E5%9B%BE%E7%89%87&queryWord=%E5%B9%B2%E7%94%B5%' \
                 'E6%B1%A0%E5%9E%83%E5%9C%BE%E5%9B%BE%E7%89%87&cl=2&lm=-1&ie=utf-8&oe=utf-8&adpicid=&st=&z=&ic=&hd=&latest=&copyright=&' \
                 's=&se=&tab=&width=&height=&face=&istype=&qc=&nc=&expermode=&nojc=&isAsync=&pn='+str(i*30)+'&rn=30&gsm=1e&1639531815932='
        getPageUrlList(base_url,num,'gandianchi')
    count=1
    saveImage('干电池垃圾')
def getShaChongJiUrl(pages,num):
    global count
    for i in range(1,pages+1):
        base_url='https://image.baidu.com/search/acjson?tn=resultjson_com&logid=12185475291220335976&ipn=rj&ct=201326592&is=&' \
                 'fp=result&fr=ala&word=%E6%9D%80%E8%99%AB%E5%89%82%E5%9E%83%E5%9C%BE%E5%9B%BE%E7%89%87&queryWord=%E6%' \
                 '9D%80%E8%99%AB%E5%89%82%E5%9E%83%E5%9C%BE%E5%9B%BE%E7%89%87&cl=2&lm=-1&ie=utf-8&oe=utf-8&adpicid=&st=&' \
                 'z=&ic=&hd=&latest=&copyright=&s=&se=&' \
                 'tab=&width=&height=&face=&istype=&qc=&nc=&expermode=&nojc=&isAsync=&pn='+str(i*30)+'&rn=30&gsm=1e&1639533683321='
        getPageUrlList(base_url,num,'shachongji')
    count=1
    saveImage('杀虫剂垃圾')
def getDengGuanUrl(pages,num):
    global count
    for i in range(1, pages + 1):
        base_url = 'https://image.baidu.com/search/acjson?tn=resultjson_com&logid=12642156037106750569&ipn=rj&ct=201326592&is=&' \
                   'fp=result&fr=ala&word=%E7%81%AF%E7%AE%A1%E5%9E%83%E5%9C%BE%E5%9B%BE%E7%89%87&queryWord=%E7%81%AF%E7%AE%A1%E5%9E%' \
                   '83%E5%9C%BE%E5%9B%BE%E7%89%87&cl=2&lm=-1&ie=utf-8&oe=utf-8&adpicid=&st=&z=&ic=&hd=&latest=&copyright=&s=&se=&t' \
                   'ab=&width=&height=&face=&istype=&qc=&nc=&expermode=&nojc=&isAsync=&pn='+str(i*30)+'&rn=30&gsm=1e&1639533774856='
        getPageUrlList(base_url, num, 'dengguan')
    count=1
    saveImage('灯管垃圾')
def getLuoYeUrl(pages,num):
    global count
    for i in range(1, pages + 1):
        base_url = 'https://image.baidu.com/search/acjson?tn=resultjson_com&logid=10801670721049147759&ipn=rj&ct=201326592&is=&' \
                   'fp=result&fr=ala&word=%E8%90%BD%E5%8F%B6%E5%9E%83%E5%9C%BE%E5%9B%BE%E7%89%87&queryWord=%E8%90%BD%E5%8F%B6%E5%9E%' \
                   '83%E5%9C%BE%E5%9B%BE%E7%89%87&cl=2&lm=-1&ie=utf-8&oe=utf-8&adpicid=&st=&z=&ic=&hd=&latest=&copyright=&s=&se=&' \
                   'tab=&width=&height=&face=&istype=&qc=&nc=&expermode=&nojc=&isAsync=&pn='+str(i*30)+'&rn=30&gsm=1e&1639533834081='
        getPageUrlList(base_url, num, 'luoye')
    count=1
    saveImage('落叶垃圾')
def getGuoKeUrl(pages,num):
    global count
    for i in range(1, pages + 1):
        base_url = 'https://image.baidu.com/search/acjson?tn=resultjson_com&logid=10125481880257839486&ipn=rj&ct=201326592&is=&' \
                   'fp=result&fr=ala&word=%E6%9E%9C%E5%A3%B3%E5%9E%83%E5%9C%BE%E5%9B%BE%E7%89%87%E6%9E%9C%E7%9A%AE&queryWord=%E6%9' \
                   'E%9C%E5%A3%B3%E5%9E%83%E5%9C%BE%E5%9B%BE%E7%89%87%E6%9E%9C%E7%9A%AE&cl=2&lm=-1&ie=utf-8&oe=utf-8&adpicid=&st=&' \
                   'z=&ic=&hd=&latest=&copyright=&s=&se=&tab=&width=&height=&face=&istype=&' \
                   'qc=&nc=&expermode=&nojc=&isAsync=&pn=&rn=30&g'+str(i*30)+'sm=1e&1639533965015='
        getPageUrlList(base_url, num, 'guoke')
    count=1
    saveImage('果壳垃圾')
def getKuaiDiUrl(pages,num):
    global count
    for i in range(1, pages + 1):
        base_url = 'https://image.baidu.com/search/acjson?tn=resultjson_com&logid=10175042616014266568&ipn=rj&ct=201326592&is=&' \
                   'fp=result&fr=ala&word=%E5%BF%AB%E9%80%92%E5%9E%83%E5%9C%BE%E5%9B%BE%E7%89%87&queryWord=%E5%BF%AB%E9%80%92%E5%9E' \
                   '%83%E5%9C%BE%E5%9B%BE%E7%89%87&cl=2&lm=-1&ie=utf-8&oe=utf-8&adpicid=&st=&z=&ic=&hd=&latest=&copyright=&s=&se=&' \
                   'tab=&width=&height=&face=&istype=&qc=&nc=&expermode=&nojc=&isAsync=&pn='+str(i*30)+'&rn=30&gsm=1e&1639534066601='
        getPageUrlList(base_url, num, 'kuaidi')
    count=1
    saveImage('快递垃圾')
def getYinLiaoPingUrl(pages,num):
    global count
    for i in range(1, pages + 1):
        base_url = 'https://image.baidu.com/search/acjson?tn=resultjson_com&logid=10143769674894347255&ipn=rj&ct=201326592&is=&' \
                   'fp=result&fr=ala&word=%E9%A5%AE%E6%96%99%E7%93%B6%E5%9E%83%E5%9C%BE%E5%9B%BE%E7%89%87%E5%A4%A7%E5%85%A8&queryWord' \
                   '=%E9%A5%AE%E6%96%99%E7%93%B6%E5%9E%83%E5%9C%BE%E5%9B%BE%E7%89%87%E5%A4%A7%E5%85%A8&cl=2&lm=-1&ie=utf-8&oe=utf-8&' \
                   'adpicid=&st=&z=&ic=&hd=&latest=&copyright=&s=&se=&tab=&width=&height=&face=&istype=&qc=&nc=&expermode=&nojc=&' \
                   'isAsync=&pn='+str(i*30)+'&rn=30&gsm=1e&1639534146966='
        getPageUrlList(base_url, num, 'yinliaopin')
    count=1
    saveImage('饮料瓶垃圾')
def getBoLiUrl(pages,num):
    global count
    for i in range(1, pages + 1):
        base_url = 'https://image.baidu.com/search/acjson?tn=resultjson_com&logid=9948802190028240291&ipn=rj&ct=201326592&is=&' \
                   'fp=result&fr=ala&word=%E7%8E%BB%E7%92%83%E5%9E%83%E5%9C%BE%E5%9B%BE%E7%89%87%E5%A4%A7%E5%85%A8&queryWord=%E7%8E%B' \
                   'B%E7%92%83%E5%9E%83%E5%9C%BE%E5%9B%BE%E7%89%87%E5%A4%A7%E5%85%A8&cl=2&lm=-1&ie=utf-8&oe=utf-8&adpicid=&st=&z=&' \
                   'ic=&hd=&latest=&copyright=&s=&se=&tab=&width=&height=&face=&istype=&qc=&nc=&expermode=&' \
                   'nojc=&isAsync=&pn='+str(i*30)+'&rn=30&gsm=1e&1639534186730='
        getPageUrlList(base_url, num, 'boli')
    count=1
    saveImage('玻璃垃圾')
def getPaoMoUrl(pages,num):
    global count
    for i in range(1, pages + 1):
        base_url = 'https://image.baidu.com/search/acjson?tn=resultjson_com&logid=10578331927687916762&ipn=rj&ct=201326592&is=&' \
                   'fp=result&fr=ala&word=%E6%B3%A1%E6%B2%AB%E5%9E%83%E5%9C%BE%E5%9B%BE%E7%89%87%E5%A4%A7%E5%85%A8&queryWord=%' \
                   'E6%B3%A1%E6%B2%AB%E5%9E%83%E5%9C%BE%E5%9B%BE%E7%89%87%E5%A4%A7%E5%85%A8&cl=2&lm=-1&ie=utf-8&oe=utf-8&adpicid' \
                   '=&st=&z=&ic=&hd=&latest=&copyright=&s=&se=&tab=&width=&height=&face=&' \
                   'istype=&qc=&nc=&expermode=&nojc=&isAsync=&pn='+str(i*30)+'&rn=30&gsm=1e&1639534214062='
        getPageUrlList(base_url, num, 'paomo')
    count=1
    saveImage('泡沫垃圾')
def getJingShuGuanUrl(pages,num):
    global count
    for i in range(1,pages+1):
        base_Url = 'https://image.baidu.com/search/acjson?tn=resultjson_com&logid=10238448750260925307&ipn=rj&'\
                   'ct=201326592&is=&fp=result&fr=&word=%E9%A3%9F%E5%93%81%E9%87%91%E5%B1%9E%E7%BD%90&queryWord=%'\
                   'E9%A3%9F%E5%93%81%E9%87%91%E5%B1%9E%E7%BD%90&cl=2&lm=-1&ie=utf-8&'\
                   'oe=utf-8&adpicid=&st=-1&z=&ic=&hd=&latest=&copyright=&s=&se=&tab=&width=&height=&'\
                   'face=0&istype=2&qc=&nc=1&expermode=&nojc=&isAsync=&pn='+str(i*30)+'&rn=30&gsm=3c&1641201920360='
        getPageUrlList(base_Url,num,'jingshuguan')
    count = 1
    saveImage('金属罐垃圾')
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
getZhiJingUrl(pages,num)
getNiaoPianUrl(pages,num)
getBeiKeUrl(pages,num)
getWenDuJiUrl(pages,num)
getGanDianchiUrl(pages,num)
getShaChongJiUrl(pages,num)
getDengGuanUrl(pages,num)
getLuoYeUrl(pages,num)
getGuoKeUrl(pages,num)
getKuaiDiUrl(pages,num)
getYinLiaoPingUrl(pages,num)
getBoLiUrl(pages,num)
getPaoMoUrl(pages,num)
getJingShuGuanUrl(pages,num)
print(len(url_list))



