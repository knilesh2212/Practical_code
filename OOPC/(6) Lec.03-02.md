### Friend Function

```cpp
#include <iostream>
using namespace std;

class meet;

class ashish
{

private:
    int a;

public:
    void setdata()
    {
        cout << endl
             << "Enter value for A =>";
        cin >> a;
    }
    void printdata()
    {
        cout << "The value of A is => " << a;
    }
    friend void max(ashish a1, meet m1);
};
class meet
{

private:
    int m;

public:
    void setdata()
    {
        cout << endl
             << "Enter value for M =>";
        cin >> m;
    }
    void printdata()

    {
        cout << endl
             << "The value of M is => " << m;
    }
    friend void max(ashish a1, meet m1);
};

void max(ashish a1, meet m1)
{
    if (a1.a > m1.m)
    {
        cout << endl
             << "A is greater";
    }

    else
    {
        cout << endl
             << "M is greater";
    }
}
main()
{
    ashish a1;
    meet m1;
    a1.setdata();
    m1.setdata();
    a1.printdata();
    m1.printdata();
    max(a1, m1);
}
```

### Static Variable

```cpp
#include <iostream>
using namespace std;

class stu
{
    private:
    int sno;
    string sname;
    static int y;

    public:
    void setdata()
    {
        cout<<endl<<"Enter Enrollment number: ";
        cin>>sno;
        cout<<endl<<"Enter Name: ";
        cin>>sname;
        y++;
    }
    void printdata()
    {
        cout<<endl<<"Enrollment Number: "<<sno<<" Name: "<<sname<<" Y= "<<y;
    }
};
int stu::y;


main()
{
stu s1,s2,s3;

s1.setdata();
s1.printdata();
s2.printdata();
s3.printdata();
s2.setdata();
s1.printdata();
s2.printdata();
s3.printdata();
s3.setdata();
s1.printdata();
s2.printdata();
s3.printdata();

}
```

### Static Function

```cpp
#include <iostream>
using namespace std;

class stu
{
    private:
    int sno;
    string sname;
    static int y;

    public:
    void setdata()
    {
        cout<<endl<<"Enter Enrollment Number => ";
        cin>>sno;
        cout<<endl<<"Enter Name => ";
        cin>>sname;
        y++;
    }
    void printdata()
    {
        cout<<endl<<"Enrollment Number => "<<sno<<" Name => "<<sname;
    }
    static void prntcnt()
{
    cout<<endl<<"Y =>  "<<y;
}
};
int stu::y;


main()
{
stu s1,s2,s3;

s1.setdata();
s2.setdata();
s3.setdata();
s1.printdata();
s2.printdata();
s3.printdata();
stu::prntcnt();

}
```