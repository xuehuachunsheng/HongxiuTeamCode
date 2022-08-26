use TestSQL;

create table mybatisTest(
    id int primary key auto_increment,
    username varchar(20),
    password varchar(20),
    gender char(1),
    addr varchar(30)
);

insert into mybatisTest(username, password, gender, addr)
VALUES ('zhangsan','123','男','北京'),
       ('李四','234','女','天津'),
       ('王五','11','男','西安');

select *
from mybatisTest;