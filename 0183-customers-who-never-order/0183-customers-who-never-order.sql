select name as customers
from customers c left join orders o
on c.id = o.customerId
where o.id is NULL;