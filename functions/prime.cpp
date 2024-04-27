#include <iostream>
using namespace std;

string primeOrNot(int n)
{
    if (n < 2)
        return "No";
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return "No";
    }
    return "Yes";
}

int main()
{
    int x;
    cout << "Enter the number: ";
    cin >> x;
    cout << "Result: " << primeOrNot(x);
}