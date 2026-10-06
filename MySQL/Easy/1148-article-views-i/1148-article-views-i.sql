# Write your MySQL query statement below
SELECT
author_id as id
from Views
Where author_id=viewer_id 
Group By(id) order by 1