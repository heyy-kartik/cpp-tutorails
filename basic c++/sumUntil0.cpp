#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout << "Enter the Number (stop to 0 )" << endl;
    while (true)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }
        else
        {
            sum = sum + n;
        }
    }
    cout << "Sum to N numbers is : " << sum;
}