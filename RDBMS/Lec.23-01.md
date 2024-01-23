## <font color="#00b0f0">Nested if,else Statement</font>

```sql
/* Finding the Maximum of Three Numbers */

DECLARE
 a number(10);
 b number(10);
 c number(10);
BEGIN
 a:=:a;
 b:=:b;
 c:=:c;
 IF (a>b AND a>c) THEN
  dbms_output.put_line('A is max');
 ELSIF (b>a AND b>c) THEN
  dbms_output.put_line('B is max');
 ELSE
  dbms_output.put_line('C is max');
END IF;
END;
```

## <font color="#00b0f0">Grade Classification</font> 

```sql
/*Enter marks between 0-100*/

DECLARE
   marks NUMBER(3);
   
BEGIN
   marks := :marks;

   IF (marks > 90 AND marks <= 100) THEN
      dbms_output.put_line('Excellent');
   ELSIF (marks > 80 AND marks <= 90) THEN
      dbms_output.put_line('A+ Grade');
   ELSIF (marks > 70 AND marks <= 80) THEN
      dbms_output.put_line('A Grade');
   ELSIF (marks > 60 AND marks <= 70) THEN
      dbms_output.put_line('B Grade');
   ELSIF (marks > 50 AND marks <= 60) THEN
      dbms_output.put_line('C Grade');
   ELSE
      dbms_output.put_line('Fail');
   END IF;
END;
```

## <font color="#00b0f0">Total Marks and Grade Classification</font>

```sql
DECLARE
   dbms_mark NUMBER(3);
   ldp_mark NUMBER(3);
   smp_mark NUMBER(3);
   total NUMBER(3);

BEGIN
   -- Input marks for each subject --
   dbms_mark := :dbms;
   ldp_mark := :ldp;
   smp_mark := :smp;

   -- Calculate the total --
   total := dbms_mark + ldp_mark + smp_mark;

   -- Grade classification
   IF (total > 250 AND total <= 300) THEN
      dbms_output.put_line('Excellent');
   ELSIF (total > 200 AND total <= 250) THEN
      dbms_output.put_line('A+ Grade');
   ELSIF (total > 150 AND total <= 200) THEN
      dbms_output.put_line('A Grade');
   ELSIF (total > 100 AND total <= 150) THEN
      dbms_output.put_line('B Grade');
   ELSIF (total > 50 AND total <= 100) THEN
      dbms_output.put_line('C Grade');
   ELSE
      dbms_output.put_line('Fail');
   END IF;

   -- Display the calculated total --
   dbms_output.put_line('Your total marks = ' || total);
   
END;

```

## <font color="#00b0f0">CASE Statement</font>

```sql

DECLARE
   grade CHAR(1) := 'A'; /*Use only uppercase*/
BEGIN
   CASE grade
      WHEN 'A' THEN
         dbms_output.put_line('Excellent');
      WHEN 'B' THEN
         dbms_output.put_line('Good');
      WHEN 'C' THEN
         dbms_output.put_line('Average');
      ELSE
         dbms_output.put_line('Fail');
   END CASE;
END;

```
