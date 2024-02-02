## Types Inheritance
--- 
### 1. Single Inheritance
### 2. Multilevel Inheritance
### 3. Multiple Inheritance
### 4. Hybrid Inheritance
### 5. Hierarchical Inheritance
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

### 4. Hybrid Inheritance

```cpp
#include <iostream>
using namespace std;

class student
{

private:
    int sno;
    string sname;

public:
    void setstudent()
    {
        cout << endl
             << "Enter student No => ";
        cin >> sno;
        cout << endl
             << "Enter student name => ";
        cin >> sname;
    }

    void printstudent()
    {
        cout << endl
             << "Student no => " << sno << endl
             << "Student name => " << sname;
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
             << "Enter marks of English => ";
        cin >> e;
        cout << endl
             << "Enter marks of Hindi => ";
        cin >> h;
    }

    void printmarks()
    {
        cout << endl
             << "English => " << e << "Hindi => " << h;
    }
};

class sports
{
protected:
    int cricket;

public:
    void setsports()
    {
        cout << endl
             << "Enter marks of Cricket => ";
        cin >> cricket;
    }

    void printsport()
    {
        cout << endl
             << "Cricket => " << cricket;
    }
};

class result : public marks, public sports
{
public:
    void printtotal()
    {
        cout << endl
             << "Total = " << e + h + cricket;
    }
};

int main()
{
    result r1;
    r1.setstudent();
    r1.setmarks();
    r1.setsports();
    r1.printstudent();
    r1.printsport();
    r1.printtotal();
}
```

###  Virtual base class

```cpp
#include <iostream>

using namespace std;

class student {
private:
    int sno;
    string sname;

public:
    void setstudent() {
        cout << endl << "Enter student No => ";
        cin >> sno;
        cout << endl << "Enter student name => ";
        cin >> sname;
    }

    void printstudent() {
        cout << endl << "Student no => " << sno << endl << "Student name => " << sname;
    }
};

class marks : virtual public student {
protected:
    int e, h;

public:
    void setmarks() {
        cout << endl << "Enter marks of English => ";
        cin >> e;
        cout << endl << "Enter marks of Hindi => ";
        cin >> h;
    }

    void printmarks() {
        cout << endl << "English => " << e << "Hindi => " << h;
    }
};

class sports : virtual public student {
protected:
    int cricket;

public:
    void setsports() {
        cout << endl << "Enter marks of Cricket => ";
        cin >> cricket;
    }

    void printsport() {
        cout << endl << "Cricket => " << cricket;
    }
};

class result : public marks, public sports {
public:
    void printtotal() {
        cout << endl << "Total = " << e + h + cricket;
    }
};

int main() {
    result r1;
    r1.setstudent();
    r1.setmarks();
    r1.setsports();
    r1.printstudent();
    r1.printmarks();
    r1.printsport();
    r1.printtotal();

    return 0;
}

```

### 5.Hierarchical Inheritance

```cpp
#include <iostream>

using namespace std;

class polygon {
    protected :
        int h,b;
    public :
        void setdata () {
            cout <<endl <<"Enter Height =>" ;
            cin >> h;
            cout <<endl <<"Enter base =>" ;
            cin >> b;
        }

        void printdata () {
            cout <<endl <<"Height =>" <<h <<endl <<"Base =>" <<b;
        }
};

class traingle : public polygon {
    public :
        void printarea (){
            cout <<endl <<"Area of Triangle => " << h*b*0.5;
        }
};

class rect : public polygon {
    public :
        void printarea (){
            cout <<endl <<"Area of Rectangle => " <<h*b;
        }
};

int main () {
    traingle t1;
    rect r1;

    t1.setdata();
    t1.printdata();
    t1.printarea();
    
    r1.setdata();
    r1.printdata();
    r1.printarea();
}
```