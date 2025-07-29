#include <iostream>
using namespace std;

int isEven(int a)
{
    if (a % 2 == 0)
    {
        cout << "it is Even Number";
    }
    else
    {
        cout << " it is Odd Number ";
    }
    return a;
}

int main()
{
    int number = 10; // Example number to test
    isEven(number);  // Pass the required argument
    return 0;
}