#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "Enter a number: ";
    cin >> i;
    switch (i)
    {
    case 1:
        cout << "One";
        break;
    case 2:
        cout << "Two";
        break;
    case 3:
        cout << "Three";
        break;
    default:
        cout << "Sorry";
    }
}