import datetime # 引入日期的包

start = datetime.date(year=2000,month=1,day=1) # 开始的日期
end = datetime.date(year=2020,month=10,day=1) # 结束的日期
gap = datetime.timedelta(days=1) # 时间gap, 每次增加1天
sum_km = 2 # 第一天是2公里
while start < end:
    start += gap; # 每次加1天
    sum_km += 2 if start.day == 1 or start.weekday() == 0 else 1
print(sum_km)
