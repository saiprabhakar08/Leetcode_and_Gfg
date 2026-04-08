# Write your MySQL query statement below
SELECT e.name FROM Employee AS e
JOIN Employee AS ee
ON e.id = ee.managerId
GROUP BY ee.managerId
HAVING COUNT(ee.managerId) >= 5;

