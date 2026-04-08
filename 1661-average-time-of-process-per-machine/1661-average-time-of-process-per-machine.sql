# Write your MySQL query statement below
SELECT a.machine_id,
ROUND(SUM((
    SELECT ae.timestamp FROM Activity AS ae
    WHERE ae.machine_id = a.machine_id AND ae.process_id = a.process_id AND ae.activity_type = 'end'
) - 
(
    SELECT aas.timestamp FROM Activity AS aas
    WHERE aas.machine_id = a.machine_id AND aas.process_id = a.process_id AND aas.activity_type = 'start'
)) 
/ COUNT(a.process_id),3) AS processing_time
FROM Activity AS a
GROUP BY a.machine_id