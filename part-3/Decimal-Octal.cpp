#include <iostream>
using namespace std;

int main()
{
    int ans = 0, mul = 1, num, mod;

    cout << "Enter Decimal number: ";
    cin >> num;

    while (num)
    {
        mod = num % 8;
        num /= 8;
        ans += mod * mul;

        mul *= 10;
    }
    cout << "Octal equivalent: " << ans;
}