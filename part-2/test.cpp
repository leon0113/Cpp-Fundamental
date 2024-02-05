#include <iostream>
using namespace std;

int main()
{
    int num, rem, ans = 0, mul = 1;
    cout << "Enter a number: ";
    cin >> num;
    while (num > 0)
    {
        rem = num % 10;
        num /= 10;
        ans += rem * mul;
        mul *= 2;
    }
    cout << ans;
}