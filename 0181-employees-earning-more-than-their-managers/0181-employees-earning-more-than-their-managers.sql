# Write your MySQL query statement below
select e1.name as Employee
from employee as e1
join employee as e2
on e1.managerid=e2.id
where e1.salary>e2.salary