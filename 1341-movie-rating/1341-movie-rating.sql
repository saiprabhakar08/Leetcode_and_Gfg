# Write your MySQL query statement below
(SELECT u.name AS results FROM Users AS u
INNER JOIN MovieRating AS m
ON u.user_id = m.user_id
GROUP BY m.user_id
HAVING COUNT(u.user_id) = 
(SELECT MAX(noOfMoviesRated) FROM 
(SELECT COUNT(mm.user_id) AS noOfMoviesRated FROM MovieRating AS mm
GROUP BY mm.user_id) AS temp)
ORDER BY u.name
LIMIT 1)
UNION ALL
(SELECT m.title AS results FROM Movies AS m
INNER JOIN MovieRating AS mrr
ON m.movie_id = mrr.movie_id
WHERE mrr.created_at LIKE '2020-02-%'
GROUP BY m.movie_id
ORDER BY AVG(mrr.rating) DESC,m.title
LIMIT 1);