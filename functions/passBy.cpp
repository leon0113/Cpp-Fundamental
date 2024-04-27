#include <iostream>
using namespace std;

// Pass by value
void Incr(int n)
{
    n++;
}
// Pass by reference
void Incr1(int &x)
{
    x++;
}
// main function
int main()
{
    int a = 5;
    int b = 5;
    Incr(a);
    Incr1(b);
    cout << a << endl;
    cout << b;
}
