# Write your MySQL query statement below
SELECT w.id FROM Weather AS w
WHERE w.temperature >
(SELECT ww.temperature FROM Weather AS ww
WHERE DATEDIFF(w.recordDate,ww.recordDate) = 1)