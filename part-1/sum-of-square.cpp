#include <iostream>

int main() {
    int n;
    std::cout << "Enter the value of 'n': ";
    std::cin >> n;

    if (n < 1) {
        std::cout << "Please enter a positive integer for 'n'." << std::endl;
        return 1; // Exit with an error code
    }

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }

    std::cout << "The sum of the squares of the first " << n << " natural numbers is: " << sum << std::endl;

    return 0;
}