# Write your MySQL query statement below
SELECT
    v.customer_id,
    COUNT(*) AS count_no_trans
FROM Visits v
Left Join Transactions t
    On v.visit_id= t.visit_id
Where t.transaction_id IS NULL
Group By v.customer_id;