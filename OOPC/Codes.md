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
