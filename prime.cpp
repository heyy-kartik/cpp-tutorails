#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter  : ";
    cin >> a;
    if (a % a == 0 && a % 1 == 0)
    {
        cout << a << "is prime number   ";
    }
    else
    {
        cout << "is not a prime number  ";
    }
}