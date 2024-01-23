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