// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter the number for table";
//     cin>>n;

//     for (int i = 1; i <= 10; i++)
//     {
//         cout<<i*n<<endl;
//     }
    
// }

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number for table: ";
    cin>>n;
    for (int i = n; i <= 10*n; i = i+n)
    {
        cout<<i<<endl;
    }
    
}