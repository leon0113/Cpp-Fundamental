#include<iostream>
using namespace std;

int main(){
    int last = 0, prev = 1, curr, num;
    
    cout<<"Enter a number: ";
    cin>>num;

    for(int i = 1; i < num; i++){
        curr = last + prev;
        last = prev;
        prev = curr;
    }
    cout<<last;
}

// #include <iostream>

// int main() {
//     int n = 8; // Calculate the 8th Fibonacci number

//     int first = 0, second = 1;

//     for (int i = 2; i < n; ++i) {
//         int next = first + second;
//         first = second;
//         second = next;
//     }

//     std::cout << "The 8th Fibonacci number is: " << second << std::endl;

//     return 0;
// }
