# Write your MySQL query statement below
select email FROM Person
GROUP by email
HAVING COUNT(email)>1;