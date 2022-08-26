use TestSQL;
create table employee
(
    id    int primary key auto_increment,
    name  varchar(20) not null,
    email varchar(20),
    birth date
);

insert into employee (name, email, birth)
values ('张三', 'zhangsan@gailm.com', now()),
       ('李四', 'lisi@gailm.com', now()),
       ('王武', 'wangwu@gailm.com', now()),
       ('小刘', 'xiaoliu@gailm.com', now())
;

update employee
set birth = now()
where name = '哪吒';

select *
from employee;

delete
from employee
where id = 13;



create table goods
(
    id   int primary key auto_increment,
    name varchar(25)
);

select count(*)
from goods;

select *
from goods;

truncate goods;


create table customer
(
    customer_id    int primary key auto_increment,
    customer_name  varchar(20),
    customer_age   int,
    customer_photo mediumblob
);

select *
from customer;

drop table customer;

select customer_id id, customer_name name, customer_age age, customer_photo photo
from customer
where customer_name = '小明';