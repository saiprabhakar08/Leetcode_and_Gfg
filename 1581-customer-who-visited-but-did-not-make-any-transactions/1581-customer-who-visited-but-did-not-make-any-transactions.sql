# Write your MySQL query statement below
SELECT v.customer_id,COUNT(
    CASE
    WHEN t.visit_id IS NULL THEN 1
    END
) AS count_no_trans FROM Visits AS v
LEFT JOIN Transactions AS t
ON v.visit_id = t.visit_id
GROUP BY v.customer_id
HAVING COUNT(CASE WHEN t.visit_id IS NULL THEN 1 END) > 0;
