# Write your MySQL query statement below
select name,unique_id 
from Employees 
LEFT JOIN EmployeeUNI
ON Employees.id = EmployeeUNI.id;