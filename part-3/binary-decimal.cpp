#include <iostream>
using namespace std;

int main()
{
    int ans = 0, mul = 1, num, mod;

    cout << "Enter Binary number: ";
    cin >> num;

    while (num)
    {
        mod = num % 10;
        num /= 10;
        ans += mod * mul;

        mul *= 2;
    }
    cout << "Decimal equivalent: " << ans;
}