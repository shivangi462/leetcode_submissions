# Write your MySQL query statement below
select stu.student_id, stu.student_name, sub.subject_name,COUNT(e.student_id) AS attended_exams
from students stu
cross join subjects sub
left join examinations e 
on stu.student_id = e.student_id AND sub.subject_name = e.subject_name
GROUP BY stu.student_id, stu.student_name, sub.subject_name
ORDER BY stu.student_id, sub.subject_name;