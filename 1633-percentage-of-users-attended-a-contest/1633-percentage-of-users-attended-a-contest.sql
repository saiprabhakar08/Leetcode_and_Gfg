# Write your MySQL query statement below
SELECT r.contest_id,ROUND((COUNT(r.user_id) / (SELECT COUNT(uu.user_id) FROM Users uu)) * 100,2) AS percentage FROM Users AS u
INNER JOIN Register AS r
ON u.user_id = r.user_id
GROUP BY r.contest_id
ORDER BY percentage DESC,r.contest_id;