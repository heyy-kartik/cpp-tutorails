#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the Number : ";
    cin >> a;

    cout << "Enter the Second Number fro calculation :";
    cin >> b;

    char op;
    cout << " Choose the Operator  ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << (a + b) << endl;
        break;

    case '-':
        cout << (a - b) << endl;
        break;
    case '*':
        cout << (a * b) << endl;
        break;
    case ' / ':
        cout << (a / b) << endl;
        break;
    case '%':
        cout << (a % b) << endl;
        break;
    default:
        " Please Choose the Right Operator . ";
    }
}