# Write your MySQL query statement below
select employee.name , bonus.bonus from employee
Left join bonus 
on employee.empid = bonus.empid
where bonus.bonus < 1000 || bonus.bonus is null