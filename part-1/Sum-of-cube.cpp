#include<iostream>
using namespace std;

int main()
{
    int sum = 0, i, num;
    cout << "Enter the number for series: ";
    cin>>num;

    for(i = 1; i <= num; i++){
        sum = sum + (i * i * i);
    }
    cout<<sum;
}