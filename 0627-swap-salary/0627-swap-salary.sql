# Write your MySQL query statement below
update salary set sex =
case sex
    when 'm' THEN 'f'
    else 'm'
END;