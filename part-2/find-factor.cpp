#include <iostream>
using namespace std;

int main()
{
  int i = 2, n;
  cout << "Enter the number: ";
  cin >> n;

  while (i <= n - 1)
  {
    if (n % i == 0)
    {
      cout << i << endl;
    }
    i++;
  }
}