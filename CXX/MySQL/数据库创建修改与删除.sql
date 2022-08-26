#创建数据库
#方式一
create database myTest1;#创建的此数据库使用的是默认的字符集
#方式二
create database myTest2 character set 'gbk';#显示指明了要创建的数据库的字符集
# 方式三（推荐）
create database if not exists myTest3 character set 'gbk';#先判断是否存在


#管理数据库
#查看当前链接中数据库都有那些
show databases;
#切换数据库
use TestSQL;
#查看当前数据库中保存的数据表
show tables;
#查看当前使用的数据库
show table status from TestSQL;



#修改数据库
#修改数据库的字符集
alter database myTest1 character set 'utf-8';
#删除数据库
drop database myTest1;
drop database if exists myTest1;#推荐


