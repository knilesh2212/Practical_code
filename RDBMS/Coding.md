# Lec.05/01
## <font color="#00b0f0"> Create table , Use  Primary key and Foreign Key </font> 

```SQL
-- Step 1 --

CREATE TABLE dept (
	d_id number(5) PRIMARY KEY,
	d_name varchar(256)
)

-- Step 2 --

INSERT INTO dept (d_id, d_name) VALUES
(1, 'Sales'),
(2, 'Marketing'),
(3, 'Human Resources'),
(4, 'Finance'),
(5, 'Operations');

-- Step 3 --

CREATE TABLE employee (
	e_id number(256) PRIMARY KEY,
	e_name varchar(256),
	city varchar(256),
	salary number(256),
	d_id number(256),
  	FOREIGN KEY (d_id) REFERENCES Dept(d_id)
)

-- Step 4 --

INSERT INTO employee (e_id, e_name, city, salary, d_id) VALUES
(1, 'Nilesh', 'New York', 60000, 1),
(2, 'Harshdeep', 'Los Angeles', 65000, 2),
(3, 'Dhruv', 'Chicago', 58000, 1),
(4, 'Dipesh', 'San Francisco', 62000, 3),
(5, 'Parth', 'Seattle', 59000, 2);

-- Step 5 (Retrieves employee details with their department names) --

SELECT employee.e_id, employee.e_name, employee.city, employee.salary, dept.d_name
FROM employee
JOIN dept ON employee.d_id = dept.d_id;

/* Instead of this we can also use
SELECT e.e_id, e.e_name, e.city, e.salary, d.d_name
FROM employee
JOIN dept d ON e.d_id = d.d_id;
*/

```



# Lec.09/01

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




# Lec.16/01

## <font color="#00b0f0">PL/SQL(Procedural Language extensions to the Structured Query Language)</font>

```sql
-- Basic structure of a PL/SQL --

DECLARE 
   <declarations section> 
BEGIN 
   <executable command(s)>
EXCEPTION      
   <exception handling> 
END;
```

### <font color="#00b0f0"> Examples of PL/SQL</font>

```sql
-- Print "Hello!" --
DECLARE 
BEGIN 
 dbms_output.put_line('Hello!');
END;

-- Print "NO." --
DECLARE
 a number(10) := 605;
BEGIN
 dbms_output.put_line('NO is ' || a);
END;

-- Print "Name" --
DECLARE
  name VARCHAR2(50) := 'Nilesh';
BEGIN
  dbms_output.put_line(name);
END;

-- Addition --
DECLARE
 a number(10) := 10;
 b number(10) := 20;
BEGIN
 dbms_output.put_line('The Value of (a+b) is ' || (a+b));
END;
```

---
#### <font color="#7030a0">The `||` operator is commonly used in SQL and PL/SQL to concatenate strings or combine text values.</font>
---

### <font color="#00b0f0">User Input Examples</font>

#### <font color="#00b0f0">Addition</font>
```sql
DECLARE
 a number(10);
 b number(10);
BEGIN
 a:=:a;
 b:=:b;
 dbms_output.put_line('The Value of (a+b) is ' || (a+b));
END;
```
#### <font color="#00b0f0">Comparing Two Numbers and Determining the Maximum</font>
```sql
DECLARE
  a NUMBER(10);
  b NUMBER(10);
BEGIN
  a:=:a;
  b:=:b;
  
  IF (a > b) THEN
    dbms_output.put_line('A is greater than B');
  ELSIF (a < b) THEN
    dbms_output.put_line('B is greater than A');
  ELSE
    dbms_output.put_line('A and B are equal');
  END IF; 
  
END;
```
#### <font color="#00b0f0">Determine whether a number is positive or negative</font>
```sql
DECLARE
  num NUMBER(10);
BEGIN
  num := :num;
  IF (num > 0) THEN
    dbms_output.put_line('Number is Positive');
  ELSIF (num < 0) THEN
    dbms_output.put_line('Number is Negative');
  ELSE
    dbms_output.put_line('Number is Zero');
  END IF;
END;
```