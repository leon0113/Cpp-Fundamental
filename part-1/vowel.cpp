#include<iostream>
using namespace std;

int main () 
{
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if(ch == 'i' || ch == 'e' || ch == 'o' || ch == 'u' || ch == 'a' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch =='U' ){
        cout<<"Vowel";
    }else{
        cout<<"Constant";
    }
}