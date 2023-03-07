insert into employee values(89, 'Sanjeev P', 101, 92600, 54, '12-Jan-2009');
insert into employee values(81, 'Rajesh Kumar', 119, 74500, 48, '11-Dec-2018');
insert into employee values(77, 'Mohan Kumar', 103, 63000, 55, '25-Nov-2000');
insert into employee values(46, 'C R Menon', 103, 67000, 38, '12-Jul-2004');
insert into employee values(34, 'Rama Gupta', 119, 52500, 43, '03-Mar-2011');
insert into employee values(21, 'Raghuvindra K', 101, 86000, 29, '11-Nov-2005');
insert into employee values(15, 'Sameer Sharma', 123, 75000, 39, '01-Apr-2007');
insert into department values(123, 'RESEARCH', 'Ajay Dutta');
insert into department values(119, 'IT', 'Yogesh Kumar');
insert into department values(103, 'HR', 'P K Singh');
insert into department values(101, 'ACCOUNTS', 'Rajiv Kumar');

create table department(depcde int primary key,
depname varchar(20),
dephead varchar(20)
);

create table employee(
    ecode int primary key,
    ename varchar(30),
    depcode int,
    salary int,
    age int
);
