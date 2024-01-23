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