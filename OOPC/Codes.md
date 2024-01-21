# Lec.01/01

## <font color="#00b0f0"> Syntax of C++</font>

```Cpp
#include <iostream>
using namespace std ;

main () {
	cout << "Hello! Guys" ;
}
```

## <font color="#00b0f0">Simple Arithmetic Operations</font>

```Cpp
#include <iostream>
using namespace std ;

main () {
    int a,b ;
    
	cout << endl << "Enter no.1 -> ";
	cin >> a ;
	cout << endl << "Enter no.2 -> ";
	cin >> b ;
	
	cout << endl << "Addition = " << a+b ;
	cout << endl << "Subtraction = " << a-b ;
	cout << endl << "Division = " << a/b ;
	cout << endl << "Multiplication = " << a*b ;
	cout << endl << "Modulo  = " << a%b ;
	return 0 ;
}
```

## <font color="#00b0f0">Squaring and Cubing a Number</font>

```Cpp
#include <iostream>
using namespace std ;

main () {
    int num ;
    
	cout << endl << "Enter no.-> ";
	cin >> num ;
	
	cout << endl << "Square = " << num*num ;
	cout << endl << "Cube = " << num*num*num ;
	return 0;
}
```

## <font color="#00b0f0">Comparing Two Numbers</font>

```cpp
#include <iostream>
using namespace std;

int main() {

    int no1, no2;
    
    cout << endl << "Enter no.1 -> ";
    cin >> no1;
    cout << endl << "Enter no.2 -> ";
    cin >> no2;
    
    if (no1 > no2) {
        cout << endl << "No.1 is Greater";
    } 
    else if (no2 > no1) {
        cout << endl << "No.2 is Greater";
    } 
    else {
        cout << endl << "Both are the same";
    }
    return 0;
}
```

## <font color="#00b0f0">Identifying Number Sign</font>

```cpp
#include <iostream>
using namespace std;

int main() {

    int no;
    cout << endl << "Enter No. -> ";
    cin >> no;
    
    if (no > 0) {
        cout << endl << "No is Positive";
    } else if (no < 0){
        cout << endl << "No is Negative";
    } else {
        cout << endl << "No is zero";
    }
    return 0;
}
```

## <font color="#00b0f0">Displaying Squares up to a Number</font>

```cpp
#include <iostream>
using namespace std;

int main() {

    int num;
    cout << endl << "Enter no -> " ;
    cin >> num ;
    
    for (int i=1 ; i<=num ; i++){
        cout << endl << i << " --> " << i*i ;
        // if you want cube then use i*i*i
    }
    return 0;
}
```

## <font color="#00b0f0">Using User-defined Functions: Next Number Display and Arithmetic Operations</font>

```cpp
#include<iostream>
using namespace std;

void nextNumber() {
    int num;
    cout << endl << "Enter number => ";
    cin >> num;
    cout << endl << "Next number => " << num + 1;
    cout << endl << "----------------------";
}

void add() {
    int num1, num2;
    cout << endl << "Enter first number => ";
    cin >> num1;
    cout << endl << "Enter second number => ";
    cin >> num2;
    
    cout << endl << "Addition = " << num1+num2 ;
	cout << endl << "Subtraction = " << num1-num2 ;
	cout << endl << "Division = " << num1/num2 ;
	cout << endl << "Multiplication = " << num1*num2 ;
	cout << endl << "Modulo  = " << num1%num2 ;
}

int main() {
    nextNumber();
    add();
    return 0;
}
```


# Lec.08/01
## <font color="#00b0f0">Scope resoultion operator</font>

```cpp
#include <iostream>
using namespace std;

int globalA = 100; // Global variable

int main() {
    int localA = 50; // Local variable within main function
    
    cout << endl << "Local A = " << localA;
    cout << endl << "Global A = " << ::globalA;
    cout << endl << "Sum of Local A and Global A = " << localA + ::globalA;
    
    return 0;
}
```

---

## <font color="#00b0f0">Function overloading</font> 
- **When we declare more than one function with the same name, the number of arguments can be different.**

---


```cpp
//Example 1. Function Overloading for Addition
#include <iostream>
using namespace std ;

void add (int a , int b){
    cout << endl << "Add = " << a+b ;
}
void add (int a , int b ,int c){
    cout << endl << "Add = " << a+b+c;
}
void add (int a , int b,int c ,int d){
    cout << endl << "Add = " << a+b+c+d ;
}

int main() {
    add(10,12);
    add(20,30,40);
    add(50,60,20,20);
    return 0;
}
```

```cpp
//Example 2. of Function overloading for Multiplication
#include <iostream>
using namespace std ;

void add (int a , int b){
    cout << endl << "Mul = " << a*b ;
}
void add (int a , int b ,int c){
    cout << endl << "Mul = " << a*b*c;
}
void add (int a , int b,int c ,int d){
    cout << endl << "Mul = " << a*b*c*d ;
}

int main() {
    add(10,12);
    add(20,30,40);
    add(50,60,20,20);
    return 0;
}
```

## <font color="#00b0f0">Inline Function for Addition</font>

```cpp
#include <iostream>
using namespace std ;

inline int add (int a , int b){
    return a + b ;
}
int main() {
    cout << endl << "Add = " << add(20,20);
}
```

---
## <font color="#00b0f0">Reference variable</font> 
- **A reference variable is an alias or reference to an existing variable, sharing the common memory of the original variable. It serves as an alternative identifier for the existing variable.**

---


```cpp
//Reference Variables
#include <iostream>
using namespace std ;

 main() {
     int a = 200;
     int &b = a ;
     cout << endl << "A = " <<  a << "  B = " << b;
     b = 500;
     cout << endl << "A = " <<  a << "  B = " << b;
     a = 99 ;
     cout << endl << "A = " <<  a << "  B = " << b;
}
```

## <font color="#00b0f0">Class-Based Data Entry and Display</font>

```cpp
#include <iostream>
using namespace std;

// Class definition for employee
class emp {
private:
    int empno;      // Employee number
    string ename;   // Employee name
    int salary;     // Employee salary

public:
    // Function to set data for an employee
    void setdata() {
        cout << endl << "Enter Employee No. -> ";
        cin >> empno;
        cout << endl << "Enter Employee Name -> ";
        cin >> ename;
        cout << endl << "Enter Employee Salary -> ";
        cin >> salary;
    }

    // Function to print data for an employee
    void printdata() {
        cout << endl << "Employee No. = " << empno << ", Employee Name = " << ename << ",            Salary = " << salary;
    }
};

// Main function
int main() {
    emp e1, e2, e3;

    // Set data for three employees
    e1.setdata();
    e2.setdata();
    e3.setdata();

    // Print data for three employees
    e1.printdata();
    e2.printdata();
    e3.printdata();

    return 0;
}
```

# Lec.20/01

## <font color="#00b0f0">Default arguments</font>

```cpp
#include <iostream>
using namespace std;

void add(int a, int b, int c = 0, int d = 0, int e = 0)
{
    cout << endl
         << "Add = " << a + b + c + d + e;
}

int main()
{
    add(1, 2, 3, 4, 5);
    add(1, 2, 3);
    add(1, 2);
    add(1, 2, 3, 4);
    return 0;
}
```

---
## <font color="#00b0f0">Constructor</font> 
 - **<font color="#7030a0">In object-oriented programming, a constructor is a special member function of a class that is automatically called when an object of that class is created. The purpose of a constructor is to initialize the object's data members or perform any other necessary setup operations.</font>**
## <font color="#00b0f0">Types of Constructors </font>
1. **<font color="#7030a0">Default Constructor</font>**
2. **<font color="#7030a0">Parameterized Constructor</font>**
3. **<font color="#7030a0">Copy Constructor</font>**
---
## <font color="#00b0f0">Student Information with Constructors</font>

```cpp
#include <iostream>
using namespace std;
class student
{
private:
    int roll_no;
    string s_name;
    int e, h;

public:
    student()
    {
        roll_no = 33;
        s_name = "Nilesh";
        e = 80;
        h = 33;
    }
    // Default constructor
    student(int a, string b, int c, int d)
    {
        roll_no = a;
        s_name = b;
        e = c;
        h = d;
    }
    void printdata()
    {
        cout << endl
             << "Roll no.->" << roll_no << " Student name->" << s_name << " English->" << e << " Hindi->" << h;
    }
};

int main()
{
    student s1(1, "Nick", 98, 80);
    student s2(2, "Raj", 46, 65);
    student s3(3, "Ritik", 94, 46);

    s1.printdata();
    s2.printdata();
    s3.printdata();
    return 0;
}
```

## <font color="#00b0f0">Employee Information with Constructors</font>

```cpp
#include <iostream>
using namespace std;

class employee
{
private:
    int e_no;
    string e_name;
    int salary;
public:
    employee()
    {
        e_no = 33;
        e_name = "Nilesh";
        salary = 80000;
    }
    // Default constructor
    employee(int a, string b, int c)
    {
        e_no = a;
        e_name = b;
        salary = c;
    }
    void printdata()
    {
        cout << endl
             << "Employee no.->" << e_no << " Employee name->" << e_name << " Salary->" << salary;
    }
};

int main()
{
    employee e1(1, "Nick", 98000);
    employee e2(2, "Raj", 49000);
    employee e3(3, "Ritik", 94000);

    e1.printdata();
    e2.printdata();
    e3.printdata();

    return 0;
}
```

---
## <font color="#00b0f0">Destructor</font> 
- **<font color="#7030a0">The name of the destructor is the same as the class; we cannot use any return type before the destructor. The destructor should be declared in the public area, and it automatically calls whenever the life of an object ends. The destructor is used to destroy the memory of an object, and we have to use the '~' (tilde) sign before the destructor.</font>**

---

## <font color="#00b0f0">Employee Data Management with Constructors and Destructors</font>

```cpp
#include <iostream>
using namespace std;

class employee {
private:
    int e_no;
    string e_name;
    int salary;

public:
    employee() {
        e_no = 33;
        e_name = "Nick";
        salary = 80000;
    }
    employee(int a, string b, int c) {
        e_no = a;
        e_name = b;
        salary = c;
    }
    ~employee() {
        cout << endl << "Bye";
    }
    void printdata() {
        cout << endl << "Employee no.->" << e_no << " Employee name->" << e_name << " Salary->" << salary;
    }
};

int main()
{
    {
        employee e1(1, "Nick", 98000);
        e1.printdata();
    } 
    {
        employee e2(2, "Raj", 49000);
        e2.printdata();
    }
    {
        employee e3(3, "Ritik", 94000);
        e3.printdata();
    }
    return 0;
}

```

## <font color="#00b0f0">Bank Account Management Using Class Objects</font>

```cpp
#include <iostream>
using namespace std;

class bank
{
private:
    int ac_no;
    string c_name;
    int balance;
public:
    void setdata()
    {
        cout << endl
             << "Enter ac_no->";
        cin >> ac_no;
        cout << endl
             << "Enter c_name->";
        cin >> c_name;
        cout << endl
             << "Enter Balance->";
        cin >> balance;
    }
    void printdata()
    {
        cout << endl
             << "Account_no->" << ac_no << " Customer_name->" << c_name << " Balance->" << balance;
    }
};

int main()
{
    bank b1, b2, b3;

    b1.setdata();
    b2.setdata();
    b3.setdata();

    b1.printdata();
    b2.printdata();
    b3.printdata();

    return 0;
}
```

## <font color="#00b0f0"> Basic Arithmetic Operations Using Class Methods</font>

```cpp
#include <iostream>
using namespace std;

class math
{
private:
    int a, b;
public:
    void setdata()
    {
        cout << endl
             << "Enter 1st_no->";
        cin >> a;
        cout << endl
             << "Enter 2nd_no->";
        cin >> b;
    }
    void printdata()
    {
        cout << endl
             << "A = " << a << " B = " << b;
    }
    void add()
    {
        cout << endl
             << "Addition (a+b) = " << a + b;
    }
    void sub()
    {
        cout << endl
             << "Subtraction (a-b) = " << a - b;
    }
    void mult()
    {
        cout << endl
             << "Multiplication (a*b) = " << a * b;
    }
    void div()
    {
        cout << endl
             << "Division (a/b) = " << a / b;
    }
    void mod()
    {
        cout << endl
             << "Modulo (a%b) = " << a % b;
    }
};

int main()
{
    math m1;

    m1.setdata();
    m1.printdata();
    m1.add();
    m1.sub();
    m1.mult();
    m1.div();
    m1.mod();

    return 0;
}
```