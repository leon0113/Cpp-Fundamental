#include<iostream>
using namespace std;

int main(){
    int num, n, pow;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter power: ";
    cin>>pow;
    num = n;
    for(int i = 1; i < pow ; i++){
        num = num * n;
    }
    cout<<num;

}