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