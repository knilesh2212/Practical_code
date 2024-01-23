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