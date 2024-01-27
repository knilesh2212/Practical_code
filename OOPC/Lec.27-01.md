## Types Inheritance
--- 
### 1. Single Inheritance
### 2. Multilevel Inheritance
### 3. Multiple Inheritance
### 4. Hierarchical Inheritance
### 5. Hybrid Inheritance
---

### 1. Single Inheritance

```cpp
#include<iostream>
using namespace std;

// Base class
class usa 
{
protected:
  int a;

public:
  void setusa()
  {
    cout << endl << "Enter a =>";
    cin >> a;
  }

  void printusa()
  {
    cout << endl << "A = " << a;
  }
};

// Derived class (inherits from usa)
class japan : public usa
{
private:
  int b;

public:
  void setjapan()
  {
    cout << endl << "Enter b =>";
    cin >> b;
  }

  void printjapan()
  {
    cout << endl << "B = " << b;
  }

  void multi()
  {
    cout << endl << "Multiple = " << a * b;
  }
};

int main()
{ 
  // Create an object of the derived class
  japan j1;

  // Call member functions from both base and derived classes
  j1.setusa();
  j1.setjapan();
  j1.printusa();
  j1.printjapan();
  j1.multi();

  return 0;
}
```

### 2. Multilevel Inheritance

```cpp
#include <iostream>
using namespace std;

class student
{
private:
  int no;
  string sname;

public:
  void setstudent()
  {
    cout << endl
         << "Enter Roll no. => ";
    cin >> no;
    cout << endl
         << "Enter name. => ";
    cin >> sname;
  }
  void printstudent()
  {
    cout << endl
         << "Roll No. => " << no << " Name => " << sname;
  }
};

class marks : public student
{
protected:
  int e, h;

public:
  void setmarks()
  {
    cout << endl
         << "Enter marks of English =>";
    cin >> e;
    cout << endl
         << "Enter marks of Hindi =>";
    cin >> h;
  }

  void printmarks()
  {
    cout << endl
         << "English => " << e << " Hindi =>" << h;
  }
};

class result : public marks
{
public:
  void printtotal()
  {
    cout << endl
         << "Total => " << e + h;
  }
};

int main()
{
  result r1;

  r1.setstudent();
  r1.setmarks();
  r1.printstudent();
  r1.printmarks();
  r1.printtotal();

  return 0;
}

```

### 3.Multiple Inheritance

```cpp
#include <iostream>
#include <string>

using namespace std;

class student
{
private:
  int no;
  string sname;

public:
  void setstudent()
  {
    cout << endl
         << "Enter no. => ";
    cin >> no;
    cout << endl
         << "Enter name. => ";
    cin >> sname;
  }
  void printstudent()
  {
    cout << endl
         << "No => " << no << " Name => " << sname;
  }
};

class marks
{
protected:
  int e, h;

public:
  void setmarks()
  {
    cout << endl
         << "Enter marks of eng and hindi =>";
    cin >> e >> h;
  }

  void printmarks()
  {
    cout << endl
         << "English => " << e << " Hindi =>" << h;
  }
};

class result : public student, public marks
{
public:
  void printtotal()
  {
    cout << endl
         << "Total => " << e + h;
  }
};

int main()
{
  result r1;

  r1.setstudent();
  r1.setmarks();
  r1.printstudent();
  r1.printmarks();
  r1.printtotal();

  return 0;
}

```