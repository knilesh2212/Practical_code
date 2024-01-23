## <font color="#00b0f0">Online SQL</font>

```sql
 -- step 01 --
CREATE TABLE customer(
	c_id int(5) PRIMARY KEY,
  	c_name VARCHAR(250),
  	city VARCHAR(250)
)

 -- step 02 --
INSERT INTO customer (c_id,c_name,city)
VALUES
(1, 'Nilesh', 'New York'),
(2, 'Harshdeep', 'Los Angeles'),
(3, 'Dhruv', 'Chicago'),
(4, 'Dipesh', 'San Francisco'),
(5, 'Parth', 'Seattle');

-- step 03 --
CREATE TABLE ORDERS (
o_id int(10) PRIMARY KEY,
o_amt int(10),
o_date date,
c_id int(5),
FOREIGN KEY (c_id) REFERENCES customer (c_id)
)

-- step 04 --  
INSERT INTO ORDERS VALUES
(1,1000,'2003-01-01',1),
(2,2000,'2003-01-02',2),
(3,3000,'2003-01-03',3),
(4,4000,'2003-01-04',4),
(5,5000,'2003-01-01',5);

-- step 05 --
SELECT customer.c_id, customer.c_name, customer.city,ORDERS.o_id,ORDERS.o_amt,ORDERS.o_date
FROM Customer 
JOIN ORDERS ON customer.c_id = ORDERS.c_id;

-- WHERE QUERY --
SELECT * FROM Customer 
WHERE city = 'New York'

```

## <font color="#00b0f0">Oracle SQL</font>

```sql
--- Oracle SQL command ---

-- Step 01 --
CREATE TABLE customer(
 c_id number(10) PRIMARY KEY,
 c_name varchar(20),
 city varchar(20)
)

-- Step 02 (INSERT VALUE ONE BY ONE) --
INSERT INTO customer VALUES
(1, 'Nilesh', 'New York')

INSERT INTO customer VALUES
(2,'Harshdeep', 'Los Angeles')

INSERT INTO customer VALUES
(3, 'Dhruv', 'Chicago')

INSERT INTO customer VALUES
(4, 'Dipesh', 'San Francisco')

INSERT INTO customer VALUES
(5, 'Parth', 'Seattle')

-- Step 03 --
CREATE TABLE orders (
 o_id number(10) PRIMARY KEY,
 o_amount number(15),
 o_date DATE,
 c_id number(10) REFERENCES customer(c_id)
)

-- Step 04 (INSERT VALUE ONE BY ONE) --
INSERT INTO orders VALUES
(01,50000,TO_DATE('2024-01-01', 'YYYY-MM-DD'),1)

INSERT INTO orders VALUES
(02,60000,TO_DATE('2024-02-01', 'YYYY-MM-DD'),2)

INSERT INTO orders VALUES
(03,40000,TO_DATE('2024-03-01', 'YYYY-MM-DD'),3)

INSERT INTO orders VALUES
(04,30000,TO_DATE('2024-04-01', 'YYYY-MM-DD'),4)

INSERT INTO orders VALUES
(05,20000,TO_DATE('2024-05-01', 'YYYY-MM-DD'),5)

-- Step 05 (Joining customer and orders tables) --
SELECT customer.c_id, customer.c_name, customer.city,
       orders.o_id, orders.o_amount, orders.o_date
FROM customer
JOIN orders ON customer.c_id = orders.c_id;

-- WHERE QUERY --
SELECT * FROM customer 
WHERE city = 'New York'

```