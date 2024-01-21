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