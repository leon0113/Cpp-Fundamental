#include<iostream>

using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(num > 0){
        cout<<"Positive interger";
    }
    else if(num == 0){
        cout<<"Zero";
    }
    else{
        cout<<"Negative integer";
    }
}