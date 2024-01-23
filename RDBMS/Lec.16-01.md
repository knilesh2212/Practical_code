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