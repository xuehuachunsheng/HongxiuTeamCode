#创建表
#方式一
create table myemp1(
    id int,
    emp_name varchar(15),
    hire_date date

);
create table if not exists myemp1( #推荐
    id int,
    emp_name varchar(15), #使用varchar来定义字符串，必须在使用varchar时指明长度
    hire_date date
);
#查看表结构
desc myemp1;
#查看创建表的语句结构
show create table myemp1;

#方式二
#说明1：查询语句中字段的别名，可以作为新的创建的表的字段的名称
#说明2: 此时的查询语句可以结构比较丰富，使用前面章节的讲过的各种select
create table myemp1
as
    select emp_name empName,hire_date
from myemp1;



#修改表  -->alter table
desc myemp1;
#添加一个字段
alter table myemp1
add salary double(10,2); #默认添加到表最后一个字段的位置

alter table myemp1
add phone_number varchar(20) first ; #在第一个位置添加

alter table myemp1
add email varchar(45) after emp_name; #在emp_name后添加

#修改一个字段:数据类型，长度，默认值（略）
alter table myemp1
modify emp_name varchar(25);

#重命名一个字段
alter table myemp1
change salary may_salary double(10,2);

alter table myemp1
change emp_name empName varchar(30);#重命名的时候也可以修改数据类型

#删除一个字段
alter table myemp1
drop column email;

#重命名表
#方式一
rename table myemp1
to myemp;
#方式二
alter table myemp
rename to myemp1;

#删除表
#不光删除表数据，还会删除表结构
drop table if exists myemp1;

#清空表
#只删除表数据，不会删除表结构
truncate table myemp1;

#DCL 中 COMMIT 和 ROLLBACK
#COMMIT：提交数据。一旦执行COMMIT，则数据永久保存到数据库中，意味着数据无法回滚。
#ROLLBACK：回滚数据。一旦执行ROLLBACK则可实现数据回滚。回滚到最近一次COMMIT之后。


#对比 TRUNCATE TABLE 和 DELETE FROM
# 相同点 ： 都可以实现对数据的删除，同时保留表结构
# 不同点 ：
#         TRUNCATE TABLE ： 一旦执行此操作，表格数据全部删除，并且不能回滚
#         DELETE FROM ： 一旦执行此操作，表格数据可以全部删除（不使用WHERE），同时数据可以实现回滚

#对比 DDL 和 DML 的说明
#1·DDL的操作一旦执行，就无法实现回滚。指令 set autocommit = false 对DDL无效
#2·DML的默认情况下，一旦执行，就无法实现回滚。但在执行前，执行了 set autocommit = false 指令，则执行的DML操作就可以实现回滚