use TestSQL;

create table join_Test(
    join_id int primary key auto_increment,
    join_account varchar(20),
    join_password varchar(20)
);

insert into join_Test(join_account, join_password)
VALUES(1232,'adsad');

select *
from join_Test;

delete from join_Test
where join_id = 1;

drop table join_Test;