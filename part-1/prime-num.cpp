#include<iostream>
using namespace std;

int main()
{
    int n, i;
    cout<<"Enter a number: ";
    cin>>n;
     
     if(n < 2){
        cout<<"Please enter a number grater than 2"; 
        return 0; 
        };

    for(i = 2; i < n; i++){
        if(n % i == 0){
            cout << "Not a prime number";
            return 0;
        }
    };
       cout << "Prime Number";
};