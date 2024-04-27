#include <iostream>
using namespace std;

char convert(char x)
{
    return x - ('a' - 'A');
}

int main()
{
    char num;
    cout << "Enter your number: ";
    cin >> num;
    cout << convert(num);
}