# Write your MySQL query statement below
SELECT DISTINCT e1.employee_id FROM Employees AS e1
JOIN Employees AS e2
ON e1.salary < 30000 AND e1.manager_id IS NOT NULL AND e1.manager_id NOT IN (SELECT e3.employee_id FROM Employees AS e3)
ORDER BY e1.employee_id;