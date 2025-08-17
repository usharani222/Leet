# Write your MySQL query statement below
select *
from cinema
where id%2!=0 AND description not in("Boring")
order by rating desc;