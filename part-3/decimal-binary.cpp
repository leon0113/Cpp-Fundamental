#include <iostream>
using namespace std;

int main()
{
    int ans = 0, mul = 1, num, rem;
    cout << "Enter a number: ";
    cin >> num;

    while (num > 0)
    {
        rem = num % 2; // find rem
        num = num / 2; // update num
        ans = rem * mul + ans;
        // update mul
        mul *= 10;
    }
    cout << ans;
}