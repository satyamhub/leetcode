# Write your MySQL query statement below
SELECT
product_name,
price,
year
FROM Sales, Product
Where Sales.product_id=Product.product_id;
